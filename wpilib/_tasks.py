from ..tasksbase import *

from ..wpiutil import _tasks as wpiutil_tasks
from ..wpimath import _tasks as wpimath_tasks
from ..hal import _tasks as hal_tasks
from ..ntcore import _tasks as ntcore_tasks

@task(pre=[wpiutil_tasks.develop, wpimath_tasks.develop, hal_tasks.develop, ntcore_tasks.develop])
def develop(ctx: Context):
    with ctx.cd(here()):
        develop_(ctx)

@task(pre=[wpiutil_tasks.build_wheel, wpimath_tasks.build_wheel, hal_tasks.build_wheel, ntcore_tasks.build_wheel])
def build_wheel(ctx: Context):
    with ctx.cd(here()):
        build_wheel_(ctx)

@task(pre=[build_wheel])
def test(ctx: Context):
    with ctx.cd(here()):
        test_(ctx)

@task
def clean(ctx: Context):
    with ctx.cd(here()):
        clean_(ctx)