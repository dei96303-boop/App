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
android.api = 33
android.minapi = 21
android.sdk = 33
android.build_tools_version = 33.0.2
android.ndk = 25b

[buildozer]
log_level = 2
warn_on_root = 1
