# allrobotpy

### 1. install requirements
`python -m pip install -r requirements.txt`

### 2. develop
`python -m invoke develop`

### build wheels
`python -m invoke build-wheel`

### list tasks
`python -m invoke -l`

## Config
Config is in `tasks.py`
<pre>
python - path to python executable
parallel - RPYBUILD_PARALLEL
cc_launcher - RPYBUILD_CC_LAUNCHER
macos_target - MACOSX_DEPLOYMENT_TARGET
strip_libpython - RPYBUILD_STRIP_LIBPYTHON
skip_installed_deps - If a dep is installed, don't check if it is up to date
no_generation - set RPYBUILD_GEN_FILTER so nothing is generated
</pre>
