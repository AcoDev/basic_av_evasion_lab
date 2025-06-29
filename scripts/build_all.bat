@echo off
REM
if not exist ..\build (
    mkdir ..\build
)

REM
gcc ..\src\*.c -O2 -Wall -Wextra -std=c11 -o ..\build\basic-av-evasion-lab.exe

if %ERRORLEVEL% equ 0 (
    echo Build successful!
) else (
    echo Build failed!
)
pause
