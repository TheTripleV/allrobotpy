# from invoke.parser import ParserContext
from invoke.tasks import Task, Call
from invoke.tasks import task as _task
from invoke.collection import Collection
from invoke.context import Context
from invoke.config import Config
from invoke.runners import Runner, Result
from invoke.program import Program
from invoke.executor import Executor

from invoke.util import debug

import subprocess
import importlib
import importlib.util
import sys
from pathlib import Path
import os
import sys
import subprocess
import platform

from typing import (
    TYPE_CHECKING,
    Optional,
    Dict,
    Any,
    Tuple,
    overload,
    Union,
    Literal,
    Type,
    List,
)

from dataclasses import dataclass

import shellingham
import pkg_resources

import inspect

#############################################
# Get the root of the git repo for later

root = Path(
    subprocess.run(
        ["git", "rev-parse", "--show-toplevel"], capture_output=True, text=True
    ).stdout.strip()
)
"""Root of Git Repo"""

#############################################
# Load the root as a module so dot imports work
# We should import .wpiutil._tasks instead of wpiutil._tasks so the package doesn't get imported

MODULE_PATH = root / "__init__.py"
MODULE_NAME = "allrobotpy"
spec = importlib.util.spec_from_file_location(MODULE_NAME, MODULE_PATH)
module = importlib.util.module_from_spec(spec)  # type: ignore
sys.modules[spec.name] = module  # type: ignore


#############################################
# All tasks working directory is the root of the git repo
# here() is used to fixup subdirectory working directories


def here() -> Path:
    """Returns the path of the file that called this function"""
    return Path(inspect.stack()[1].filename).parent


#############################################
# Detect the current shell and setup shell sentinels
# Supports detecting bash, powershell, and cmd


@dataclass(frozen=True)
class _Shell:
    path: str


# These 3 need to be unique sentinel objects (after shell detection)
bash = _Shell("bash_with_no_path")
ps = _Shell("powershell_with_no_path")
cmd = _Shell("cmd_with_no_path")

try:
    _shell = shellingham.detect_shell()[1]
    debug(f"Shellingham Detected shell: {_shell}")
except shellingham.ShellDetectionFailure:
    _shell = os.getenv("SHELL", "").lower()
    debug(f"Shellingham failed, using SHELL env var: {_shell}")


def detect_shell_variant(shell_path: str) -> Union[_Shell, None]:
    global bash, ps, cmd
    if "pwsh" in shell_path:
        debug(f"Detected powershell: {ps}")
        return ps
    elif "powershell" in _shell:
        debug(f"Detected powershell: {ps}")
        return ps
    elif "bash" in _shell:
        debug(f"Detected bash: {bash}")
        return bash
    elif _shell.endswith("sh"):
        debug(f"Detected bash: {bash}")
        return bash
    elif "cmd" in _shell:
        debug(f"Detected cmd: {cmd}")
        return cmd
    else:
        debug(f"Could not detect shell")
        return None


detected_shell = detect_shell_variant(_shell)
if not detected_shell:
    debug(f"Could not detect shell, defaulting to /bin/bash")
    default_shell = bash = _Shell("/bin/bash")

if detected_shell is ps:
    default_shell = ps = _Shell(_shell)
    debug(f"Detected powershell: {ps}")
elif detected_shell is cmd:
    default_shell = cmd = _Shell(_shell)
    debug(f"Detected cmd: {cmd}")
elif detected_shell is bash:
    default_shell = bash = _Shell(_shell)
    debug(f"Detected bash: {bash}")


#############################################
# Create a dumping ground for global state
class GlobalState:
    """Holds global state. Use as Class"""

    current_task: Optional[Task] = None
    current_call: Optional[Call] = None
    up_to_date: Dict[Task, bool] = {}
    num_calls_in_execution = 0
    running_call_idx = -1
    program: Program


#############################################
# Record the number of calls that will be executed

old_Executor_dedupe = Executor.dedupe


def new_Executor_dedupe(*args, **kwargs):
    result = old_Executor_dedupe(*args, **kwargs)
    GlobalState.num_calls_in_execution = len(result)
    return result


Executor.dedupe = new_Executor_dedupe

#############################################
####################
# Setup default working directory to repo root instead of the terminal's cwd
# Add GlobalState so we can pull internal data out for later (up to date)

old_Context_init = Context.__init__


def new_Context_init(self, config: Optional[Config] = None) -> None:
    old_Context_init(self, config)
    self.command_cwds.append(str(root))
    self.global_state = GlobalState


Context.__init__ = new_Context_init

####################
# Setup default shell to the user's terminal instead of forcing cmd on windows and bash on linux/macos
# Allow using different commands for different shells (bash, ps, cmd)

old_Context_run = Context.run


def new_Context_run(self, *args, **kwargs):
    d = {
        bash: kwargs.pop("bash", None),
        ps: kwargs.pop("ps", cmd),
        cmd: kwargs.pop("cmd", ps),
    }

    def lookup(key):
        v = d[key]
        if v in d:
            return lookup(v)
        return v

    if "shell" not in kwargs:
        kwargs["shell"] = default_shell.path

    if len(args) == 1 and isinstance(args[0], str):
        command = args[0]
    else:
        command = lookup(default_shell)

    return old_Context_run(self, command, **kwargs)


Context.run = new_Context_run

####################
# Propogate the chosen shell into the command prefixer so we can use the correct syntax for each shell

old_Context__run = Context._run


def new_Context__run(
    self, runner: "Runner", command: str, **kwargs: Any
) -> Optional[Result]:
    command = self._prefix_commands(
        command, shell=detect_shell_variant(kwargs["shell"])
    )
    if platform.system() == "Windows" and detect_shell_variant(kwargs["shell"]) is bash:
        command = command.replace("\\", "/")
        command = f'"{kwargs["shell"]}" -c "{command}"'
        del kwargs["shell"]

    # print(f"Running: {command}")

    return runner.run(command, **kwargs)


Context._run = new_Context__run

####################
# Redo the command prefixer to use the correct syntax for each shell

old_Context__prefix_commands = Context._prefix_commands


def new_Context__prefix_commands(self, command: str, shell=None) -> str:
    prefixes = list(self.command_prefixes)
    current_directory = self.cwd
    if current_directory:
        prefixes.insert(0, "cd {}".format(current_directory))

    if shell is ps:
        # return "; if ($?) {".join(prefixes + [command]) + "}" * len(prefixes)
        return " ; if (-not $?) {exit $?}; ".join(prefixes + [command])
    return " && ".join(prefixes + [command])


Context._prefix_commands = new_Context__prefix_commands

#############################################
# Add type hints for the new Context.run() arguments
# The libraries type hints are broken and unusable anyway

if TYPE_CHECKING:
    seconds = float
    default: Any = object()
    true = default
    false = default
    none = default

    class Context(Context):
        global_state: Type["GlobalState"]

        def run(
            self,
            command: Optional[str] = none,
            *,
            bash: Union[_Shell, str] = none,
            cmd: Union[_Shell, str] = ps,
            ps: Union[_Shell, str] = cmd,
            env: Dict[str, str] = default,
            echo: bool = false,
            dry: bool = false,
            shell: str = default,
            asynchronous: bool = false,
            disown: bool = false,
            echo_format: str = default,
            echo_stdin: Optional[bool] = none,
            encoding: Optional[str] = none,
            err_stream=none,
            fallback: bool = true,
            in_stream=none,
            out_stream=none,
            pty: bool = false,
            replace_env: bool = false,
            timeout: Optional[seconds] = none,
            warn: bool = false,
            watchers=default,
        ) -> Result:
            ...


#############################################
# A Context is made right before a command is run, so we dump the current state into GlobalState here

old_Call_make_context = Call.make_context


def new_Call_make_context(self, config: "Config") -> Context:
    context = Context(config=config)
    context.global_state = GlobalState
    GlobalState.current_call = self
    GlobalState.current_task = self.task
    GlobalState.running_call_idx += 1
    return context


Call.make_context = new_Call_make_context

#############################################
# Fix the Task equality check and hash to include the module name
# By default a task is equal to another task if they have the same name/code, even if they are in different modules

old_Task_eq = Task.__eq__


def new_Task_eq(self, other):
    if not old_Task_eq(self, other):
        return False
    if self.__module__ != other.__module__:
        return False
    return True


Task.__eq__ = new_Task_eq

old_Task_hash = Task.__hash__


def new_Task_hash(self):
    return old_Task_hash(self) + hash(self.__module__)


Task.__hash__ = new_Task_hash

#############################################
# Helper functions to check if a package is installed and get its installed location


def is_package_installed(package_name):
    try:
        pkg_resources.get_distribution(package_name)
        return True
    except pkg_resources.DistributionNotFound:
        return False


def package_path(package_name):
    return Path(pkg_resources.get_distribution(package_name).location)


#############################################
# get reference to program

old_Program_execute = Program.execute
def new_Program_execute(self, *args, **kwargs):
    GlobalState.program = self
    old_Program_execute(self, *args, **kwargs)
Program.execute = new_Program_execute

#############################################
# Put in a copout to ignore dependenices - RPYINVOKE_NO_PRE


def task(*args, **kwargs):
    if os.environ.get("RPYINVOKE_NO_PRE", False):
        if len(args) == 1 and callable(args[0]) and not isinstance(args[0], Task):
            ...
        else:
            args = []
            kwargs.pop("pre", None)
    return _task(*args, **kwargs)


#############################################
# Add a new executor that just records the calls and tasks that would be executed


class NoExecuteExecutor(Executor):
    calls: List[Call] = []
    tasks: List[Task] = []

    def execute(self, *tasks) -> Dict[Task, Result]:
        calls = self.normalize(tasks)
        direct = list(calls)
        expanded = self.expand_calls(calls)
        try:
            dedupe = self.config.tasks.dedupe
        except AttributeError:
            dedupe = True
        calls = self.dedupe(expanded) if dedupe else expanded
        NoExecuteExecutor.calls = calls
        NoExecuteExecutor.tasks = [call.task for call in calls]
        return {}


def get_full_task_name(program: Program, task: Task):
    for name, t in program.collection.tasks.items():
        if t == task:
            return f"{name}"

    for collection in program.collection.collections.values():
        for name, t in collection.tasks.items():
            if t == task:
                return f"{collection.name}.{name}"

    raise ValueError(f"Task {task} not found in program {program}")


#############################################
# Generate github actions for all tasks


def generate_github_actions_():
    """Generate github actions for all tasks"""
    import ruamel.yaml

    yaml = ruamel.yaml.YAML(typ="rt")
    yaml.width = 4096

    preworkflows = Path(".github/preworkflows/").glob("*")

    for preworkflow in preworkflows:
        data = yaml.load(preworkflow.read_text())
        jobs = data["jobs"]
        for job_name, job in jobs.items():
            steps = job["steps"]

            while True:
                for idx in range(len(steps)):
                    step = steps[idx]
                    if step.get("name", None) == "#invoke":
                        launcher, argv = (
                            step["run"].strip().split("invoke ", maxsplit=1)
                        )
                        launcher = launcher.strip()
                        argv = argv.strip()
                        program = Program(executor_class=NoExecuteExecutor)
                        # program.run(argv)
                        program.run(["invoke", *argv.split(" ")])
                        tasks = NoExecuteExecutor.tasks
                        full_task_names = [
                            get_full_task_name(program, task) for task in tasks
                        ]

                        for task_name in reversed(full_task_names):
                            step2 = step.copy()
                            step2["name"] = task_name
                            step2.yaml_add_eol_comment(
                                f"For tasks {argv}, Autogenerated by invoke.", "name"
                            )
                            # __import__('code').interact(local={**globals(), **locals()})

                            step2[
                                "run"
                            ] = f"RPYINVOKE_NO_PRE=1 {launcher} invoke {task_name}"
                            # step2["run"] = f"{launcher} invoke {task_name}"
                            steps.insert(idx + 1, step2)

                        del steps[idx]

                        break
                else:
                    break

        path = Path(".github/workflows/", preworkflow.name)
        path.unlink(missing_ok=True)
        yaml.dump(data, path)

        # __import__('code').interact(local={**globals(), **locals()})

#############################################
# Show progress bar

if platform.system() == "Windows":
    # Windows is weird. When the output is
    # redirected, most if it is completely blank
    redirect = False
else:
    redirect = True

if os.getenv("CI") is None:
    import atexit
    from datetime import datetime
    import time
    import threading

    import rich.progress
    import rich.columns
    import rich.text
    import rich.panel

    class NumTaskColumn(rich.progress.ProgressColumn):
        def render(self, task: rich.progress.Task) -> rich.text.Text:
            return rich.text.Text(f"{task.completed}/{task.total}" , style="purple")


    current_hour = datetime.now().hour
    if current_hour >= 7 and current_hour < 12 + 9:
        spinner_name = "earth"
    else:
        spinner_name = "moon"

    def progress_bar_worker():
        with rich.progress.Progress(
            rich.progress.SpinnerColumn(spinner_name=spinner_name),
            rich.progress.TextColumn("[progress.description]{task.description}"),
            rich.progress.BarColumn(),
            NumTaskColumn(),
            rich.progress.TimeElapsedColumn(),
            redirect_stderr=redirect,
            redirect_stdout=redirect,
        ) as progress:
            task1 = progress.add_task("")

            old_current_task = None
            name = ""
            while not progress.finished:
                current_task = GlobalState.current_task
                if current_task is not None:
                    if current_task != old_current_task:
                        old_current_task = current_task
                        name = get_full_task_name(GlobalState.program, current_task)
                    elif current_task.called == True:
                        GlobalState.running_call_idx += 1
                    elif threading.main_thread().is_alive() == False:
                        exit()
                else:
                    name = ""
                
                progress.update(
                    task1,
                    description=name,
                    total=GlobalState.num_calls_in_execution or 99,
                    completed=GlobalState.running_call_idx
                )
                # print(GlobalState.num_calls_in_execution)
                time.sleep(0.02)
                # print(GlobalState.program)


    print_list_thread = threading.Thread(target=progress_bar_worker)
    print_list_thread.start()
