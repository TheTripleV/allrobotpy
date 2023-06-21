from invoke.tasks import task
from invoke.collection import Collection
from invoke.context import Context

@task
def develop(ctx: Context):
    ctx.run("python setup.py develop")
