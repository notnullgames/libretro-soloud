```
cmake -B build .
make -C build

# mac
/Applications/RetroArch.app/Contents/MacOS/RetroArch -L build/null0-libretro.dylib

# windows
retroArch -L build/null0-libretro.dll

# linux
retroArch -L build/null0-libretro.so
```