# from invoke.parser import ParserContext
from invoke.tasks import Task, Call
from invoke.tasks import task as _task
from invoke.collection import Collection
from invoke.context import Context
from invoke.config import Config
from invoke.runners import Runner, Result
from invoke.program import Program
from invoke.executor import Executor

import subprocess
import importlib
import importlib.util
import sys
from pathlib import Path
import os
import sys
import subprocess

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

#############################################
root = Path(
    subprocess.run(
        ["git", "rev-parse", "--show-toplevel"], capture_output=True, text=True
    ).stdout.strip()
)
"""Root of Git Repo"""

#############################################
import inspect


def here() -> Path:
    """Returns the path of the file that called this function"""
    return Path(inspect.stack()[1].filename).parent


#############################################

# Load the root as a module so local imports work
MODULE_PATH = root / "__init__.py"
MODULE_NAME = "allrobotpy"
spec = importlib.util.spec_from_file_location(MODULE_NAME, MODULE_PATH)
module = importlib.util.module_from_spec(spec)  # type: ignore
sys.modules[spec.name] = module  # type: ignore


#############################################
def boolify(value) -> bool:
    """Check if a string's contents are truthy or falsy"""
    try:
        if isinstance(value, bool):
            return value
        return bool(eval(value))
    except:
        raise ValueError(f"Could not convert {value} to bool")


#############################################
# Detect the current shell and setup shell sentinels


@dataclass(frozen=True)
class _Shell:
    path: str


# These 3 need to be unique sentinel objects (after shell detection)
bash = _Shell("bash_with_no_path")
ps = _Shell("powershell_with_no_path")
cmd = _Shell("cmd_with_no_path")


_shell = os.getenv("SHELL", "")
if "pwsh" in _shell:
    default_shell = ps = _Shell(_shell)
elif "powershell" in _shell:
    default_shell = ps = _Shell(_shell)
elif "bash" in _shell:
    default_shell = bash = _Shell(_shell)
elif _shell.endswith("sh"):
    default_shell = bash = _Shell(_shell)
elif sys.platform == "win32":
    # If Windows platform
    try:
        # Check if we're in PowerShell
        subprocess.check_output("Get-Command", shell=True)
        default_shell = ps = _Shell("PowerShell")
    except subprocess.CalledProcessError:
        default_shell = cmd = _Shell("cmd")
else:
    print(f"Could not detect shell, defaulting to current shell ({_shell}) and pretending it's bash")
    default_shell = bash = _Shell(_shell)

#############################################
# Context.run monkeypatch's
# 1. actually add type hints
# 2. use the user's shell by default (instead of just bash or cmd)
# 3. let different commands be specified for bash, ps, and cmd
# Default echo to True

# class Context(invoke.context.Context):
old_Context_init = Context.__init__


def new_Context_init(self, config: Optional[Config] = None) -> None:
    old_Context_init(self, config)
    self.command_cwds.append(root)
    self.global_state = GlobalState


Context.__init__ = new_Context_init

old_Context_run = Context.run


def new_Context_run(self, *args, **kwargs):
    if "shell" not in kwargs:
        kwargs["shell"] = default_shell.path

    if "bash" in kwargs:
        _bash = kwargs["bash"]
    else:
        _bash = args[0]

    _ps = kwargs.get("ps", cmd)
    _cmd = kwargs.get("cmd", ps)

    if _cmd is ps and _ps is cmd:
        _cmd = bash
        _ps = bash

    d = {bash: _bash, ps: _ps, cmd: _cmd}

    def lookup(key):
        v = d[key]
        if v in d:
            return lookup(v)
        return v

    command = lookup(default_shell)

    kwargs.pop("bash", None)
    kwargs.pop("ps", None)
    kwargs.pop("cmd", None)

    if "echo" not in kwargs:
        kwargs["echo"] = True

    return old_Context_run(self, command, **kwargs)


Context.run = new_Context_run

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
            bash: Union[_Shell, str],
            *,
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

old_Call_make_context = Call.make_context


def new_Call_make_context(self, config: "Config") -> Context:
    context = Context(config=config)
    context.global_state = GlobalState
    GlobalState.current_call = self
    GlobalState.current_task = self.task
    return context


Call.make_context = new_Call_make_context

#############################################

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

import pkg_resources


def is_package_installed(package_name):
    try:
        pkg_resources.get_distribution(package_name)
        return True
    except pkg_resources.DistributionNotFound:
        return False


def package_path(package_name):
    return Path(pkg_resources.get_distribution(package_name).location)


#############################################


class GlobalState:
    """Holds global state. Use as Class"""

    current_task: Optional[Task] = None
    current_call: Optional[Call] = None
    up_to_date: Dict[Task, bool] = {}


#############################################


def task(*args, **kwargs):
    if os.environ.get("RPYINVOKE_NO_PRE", False):
        args = []
        kwargs.pop("pre", None)
    return _task(*args, **kwargs)


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
