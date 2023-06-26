from ..tasksbase import *

from ..hal import _tasks as hal_tasks
from ..wpinet import _tasks as wpinet_tasks


@task(pre=[hal_tasks.develop, wpinet_tasks.develop])
def develop(ctx: Context):
    with ctx.cd(here()):
        develop_(ctx)


@task(pre=[hal_tasks.build_wheel, wpinet_tasks.build_wheel])
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
