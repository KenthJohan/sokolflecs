../sokol-shdc --input triangle-sapp.glsl --output triangle-sapp.glsl.h --slang glsl330:hlsl5:metal_macos
gcc triangle-sapp.c -I../sokol -I../libs -lgdi32