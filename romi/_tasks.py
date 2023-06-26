from ..tasksbase import *

from ..wpilib import _tasks as wpilib_tasks


@task(pre=[wpilib_tasks.develop])
def develop(ctx: Context):
    with ctx.cd(here()):
        develop_(ctx)

@task(pre=[wpilib_tasks.build_wheel])
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