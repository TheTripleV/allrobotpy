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

everything = [hal_tasks, halsim_ds_socket_tasks, halsim_gui_tasks, halsim_ws_tasks, ntcore_tasks, romi_tasks, wpilib_tasks, wpimath_tasks, wpinet_tasks, wpiutil_tasks]

namespace = Collection()

for module in everything:
    namespace.add_collection(Collection.from_module(module, name=module.__package__.split(".")[-1]))

# namespace.add_collection(Collection.from_module(hal_tasks), name="hal")
# namespace.add_collection(Collection.from_module(halsim_ds_socket_tasks), name="halsim_ds_socket")
# namespace.add_collection(Collection.from_module(halsim_gui_tasks), name="halsim_gui")
# namespace.add_collection(Collection.from_module(halsim_ws_tasks), name="halsim_ws")
# namespace.add_collection(Collection.from_module(ntcore_tasks), name="ntcore")
# namespace.add_collection(Collection.from_module(romi_tasks), name="romi")
# namespace.add_collection(Collection.from_module(wpilib_tasks), name="wpilib")
# namespace.add_collection(Collection.from_module(wpimath_tasks), name="wpimath")
# namespace.add_collection(Collection.from_module(wpinet_tasks), name="wpinet")
# namespace.add_collection(Collection.from_module(wpiutil_tasks), name="wpiutil")

# @task(pre=[hal_tasks.develop, halsim_ds_socket_tasks.develop])
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

namespace.add_task(develop) # type: ignore
namespace.add_task(build_wheel) # type: ignore
namespace.add_task(test) # type: ignore
namespace.add_task(build_and_test) # type: ignore
namespace.add_task(clean) # type: ignore
namespace.add_task(generate_github_actions) # type: ignore


namespace.configure({
    "python": sys.executable,
    "parallel": True,
    # "parallel": False,
    "cc_launcher": "ccache",
    "macos_target": "11",
    "strip_libpython": True,
    "skip_installed_deps": False,
    # "skip_installed_deps": True,
    "run": {
        # "hide": "both",
    },
})
