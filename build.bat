@REM .c 编译成 .o
gcc src\main.c -c -o build\main.o
gcc src\RoleEntity.c -c -o build\RoleEntity.o

@REM .o 链接 .a/.so/.dll/.dylib
@REM 它隐式地链接了 libmsvcrt.a
:: 静态链接 gcc -o bin\main.exe build\main.o lib\libraylib.a -lgdi32 -lwinmm
:: 它省略了--target = triplet(本机的)
gcc build\main.o build\RoleEntity.o lib\raylib.dll -o bin\main.exe

:: 动态链接就需要把dll复制到bin目录下
copy lib\raylib.dll bin\raylib.dll

start bin\main.exe