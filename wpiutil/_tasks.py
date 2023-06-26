from ..tasksbase import *


@task
def develop(ctx: Context):
    with ctx.cd(here()):
        develop_(ctx)


@task
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
