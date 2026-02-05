[app]
title = My C Calculator
package.name = ccalc
package.domain = org.engineer
source.dir = .
source.include_exts = py,png,jpg,kv,atlas,c
version = 0.1
requirements = python3,kivy

orientation = portrait
fullscreen = 0
android.archs = arm64-v8a, armeabi-v7a

# লাইসেন্স অটো-একসেপ্ট নিশ্চিত করতে
android.accept_sdk_license = True
android.api = 31
android.minapi = 21
android.sdk = 31
android.build_tools_version = 31.0.0
android.ndk = 25b

[buildozer]
log_level = 2
warn_on_root = 1
