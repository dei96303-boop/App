[app]
title = My C Calculator
package.name = ccalc
package.domain = org.test
source.dir = .
source.include_exts = py,png,jpg,kv,atlas,c
version = 0.1
requirements = python3,kivy

orientation = portrait
osx.python_version = 3
osx.kivy_version = 1.9.1
fullscreen = 0

android.archs = arm64-v8a, armeabi-v7a
android.allow_backup = True
android.api = 31
android.minapi = 21
android.sdk = 31
android.build_tools_version = 31.0.0
android.accept_sdk_license = True

[buildozer]
log_level = 2
warn_on_root = 1
