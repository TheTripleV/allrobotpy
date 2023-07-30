from tasksbase import *

__package__ = "allrobotpy"


from .hal import _tasks as hal_tasks
from .halsim_ds_socket import _tasks as halsim_ds_socket_tasks
from .halsim_gui import _tasks as halsim_gui_tasks
from .halsim_ws import _tasks as halsim_ws_tasks
from .ntcore import _tasks as ntcore_tasks
from .romi import _tasks as romi_tasks
from .wpilib import _tasks as wpilib_tasks
from .wpimath import _tasks as wpimath_tasks
from .wpinet import _tasks as wpinet_tasks
from .wpiutil import _tasks as wpiutil_tasks

everything = [
    hal_tasks,
    halsim_ds_socket_tasks,
    halsim_gui_tasks,
    halsim_ws_tasks,
    ntcore_tasks,
    romi_tasks,
    wpilib_tasks,
    wpimath_tasks,
    wpinet_tasks,
    wpiutil_tasks,
]

namespace = Collection()

for module in everything:
    namespace.add_collection(
        Collection.from_module(module, name=module.__package__.split(".")[-1])
    )

allow_dot_subdir_commands(namespace)

@task(pre=[t.develop for t in everything])
def develop(ctx: Context):
    ...


@task(pre=[t.build_wheel for t in everything])
def build_wheel(ctx: Context):
    ...


@task(pre=[t.test for t in everything])
def test(ctx: Context):
    ...


@task(pre=[build_wheel, test])
def build_and_test(ctx: Context):
    ...


@task(pre=[t.clean for t in everything])
def clean(ctx: Context):
    ...


@task
def generate_github_actions(ctx: Context):
    generate_github_actions_()

@task
def python(ctx: Context):
    subprocess.run("python", cwd=Path(ctx.cwd, "nothing/").resolve())


namespace.add_task(develop)  # type: ignore
namespace.add_task(build_wheel)  # type: ignore
namespace.add_task(test)  # type: ignore
namespace.add_task(build_and_test)  # type: ignore
namespace.add_task(clean)  # type: ignore
namespace.add_task(generate_github_actions)  # type: ignore
namespace.add_task(python)  # type: ignore

namespace.configure(
    {
        "python": sys.executable,
        "parallel": True,
        # "parallel": False,
        "cc_launcher": "ccache",
        # "cc_launcher": "",
        "macos_target": "11",
        "strip_libpython": True,
        # "skip_installed_deps": True,
        "skip_installed_deps": False,
        # "no_generation": True,
        "no_generation": False,
        "run": {
            # "hide": "both",
            # "hide": False,
            "echo": True
        },
    }
)
