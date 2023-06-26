from ..tasksbase import *

from ..wpiutil import _tasks as wpiutil_tasks


@task(pre=[wpiutil_tasks.develop])
def develop(ctx: Context):
    with ctx.cd(here()):
        develop_(ctx)


@task(pre=[wpiutil_tasks.build_wheel])
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
