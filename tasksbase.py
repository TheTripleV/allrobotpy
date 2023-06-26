
from tasksengine import *

def install_build_deps_(ctx: Context):
    ctx.run(
        f"{ctx.python} -m robotpy_build build-dep --install "
        "--find-links https://www.tortall.net/~robotpy/wheels/2022/linux_x86_64",
    )

def develop_(ctx: Context):
    if up_to_date(ctx):
        return
    ctx.run(
        f"{ctx.python} -m pip uninstall -y {get_package_name(ctx)}",
    )
    ctx.run(
        f"{ctx.python} setup.py develop",
        env={
            "RPYBUILD_PARALLEL": str(int(ctx.parallel)),
            "RPYBUILD_CC_LAUNCHER": ctx.cc_launcher,
        }
    )
    Path(ctx.cwd, ".editable.last_file").unlink(missing_ok=True)
    Path(ctx.cwd, ".editable.last_file").touch()

def build_wheel_(ctx: Context):
    if up_to_date(ctx):
        if ctx.config.skip_installed_deps:
            return
        # Don't rebuild the whell but still reinstall it.
        # There's isn't a mechanism to compare a wheel to an installed package yet.
        ctx.run(
            f"{ctx.python} -m pip uninstall -y {get_package_name(ctx)}",
        )
        ctx.run(f"{ctx.python} -m pip install --force-reinstall {get_wheel(ctx)}")
        return
    ctx.run(
        f"{ctx.python} -m pip uninstall -y {get_package_name(ctx)}",
    )
    ctx.run(
        f"{ctx.python} setup.py bdist_wheel",
        env={
            "RPYBUILD_PARALLEL": str(int(ctx.parallel)),
            "RPYBUILD_CC_LAUNCHER": ctx.cc_launcher,
            "MACOSX_DEPLOYMENT_TARGET": ctx.macos_target,
            "RPYBUILD_STRIP_LIBPYTHON": str(int(ctx.strip_libpython)),
        }
    )

    orig_plat_tag = "linux_x86_64"
    manylinux_tag = "manylinux_2_27_x86_64"

    for path in Path(ctx.cwd).glob(f"./dist/*{orig_plat_tag}.whl"):
        new_path = path.replace(path.with_stem(path.stem.replace(orig_plat_tag, manylinux_tag)))
        print(f"Renamed {path} to {new_path}")

    orig_plat_tag = "macosx_11_0_x86_64"
    mac_compat_tag = "macosx_10_16_x86_64"

    for path in Path(ctx.cwd).glob(f"./dist/*{orig_plat_tag}.whl"):
        new_path = path.replace(path.with_stem(path.stem.replace(orig_plat_tag, mac_compat_tag)))
        print(f"Renamed {path} to {new_path}")
    
    ctx.run(f"{ctx.python} -m pip install --force-reinstall {get_wheel(ctx)}")

    Path(ctx.cwd, ".wheel.last_file").unlink(missing_ok=True)
    Path(ctx.cwd, ".wheel.last_file").touch()


def build_sdist_(ctx: Context):
    ctx.run(
        f"{ctx.python} setup.py sdist",
    )

def test_(ctx: Context):
    with ctx.cd("tests"):
        ctx.run(
            f"{ctx.python} -m pip install -r requirements.txt",
        )
        ctx.run(
            f"{ctx.python} run_tests.py",
        )

def clean_(ctx: Context):
    ctx.run(
        bash="rm -rf ./build ./dist ./.editable.last_file ./.wheel.last_file",
        # cmd="del /s /q build dist .last_file",
        # ps="Remove-Item -Recurse -Force ./build, ./dist, ./.last_file",
    )


def get_wheel(ctx: Context):
    wheels = list(Path(ctx.cwd, "dist").glob("*.whl"))
    if len(wheels) == 0:
        return None
    return wheels[0]


def up_to_date(ctx: Context, package_name = None):
    if ctx.global_state.current_task is None:
        print("WARNING: up_to_date() called outside of task")
        return _up_to_date(ctx, package_name)
    for task in ctx.global_state.current_task.pre:
        if not ctx.global_state.up_to_date.get(task, True): # type: ignore
            ctx.global_state.up_to_date[ctx.global_state.current_task] = False
            return False
    utd = _up_to_date(ctx, package_name)
    ctx.global_state.up_to_date[ctx.global_state.current_task] = utd
    return utd

def get_package_name(ctx: Context):
    try:
        import tomllib
    except ModuleNotFoundError:
        import tomli as tomllib
    
    try:
        return tomllib.loads((Path(ctx.cwd) / "pyproject.toml").read_text())['tool']['robotpy-build']['metadata']['name']
    except:
        return None

def _up_to_date(ctx: Context, package_name = None):
    if package_name is None:
        package_name = get_package_name(ctx)
    if package_name is None:
        raise Exception("Could not determine package name")
    
    if not is_package_installed(package_name):
        return False

    if ctx.config.skip_installed_deps:
        return True

    def modified_time(path: Path):
        return path.stat().st_mtime

    trackables = [Path(ctx.cwd) / path for path in ctx.run("git ls-files --exclude-standard -o -c").stdout.splitlines()]

    if package_path(package_name).resolve() == Path(ctx.cwd).resolve():
        last_file = Path(ctx.cwd, ".editable.last_file")
        if not last_file.exists():
            # print(f"{last_file} does not exist")
            return False
        last_time = modified_time(last_file)
        for path in trackables:
            if not path.exists():
                continue
            if modified_time(path) > last_time:
                # print(f"{path} is newer than {last_file}")
                return False
        return True
    # print("Checking wheel")
    # wheel install
    wheel = get_wheel(ctx)
    if wheel is None:
        return False
    last_file = Path(ctx.cwd, ".wheel.last_file")
    if not last_file.exists():
        # print(f"{last_file} does not exist")
        return False
    last_time = modified_time(last_file)

    for path in trackables:
        if modified_time(path) > last_time:
            # print(f"{path} is newer than {last_file}")
            return False
    return True



