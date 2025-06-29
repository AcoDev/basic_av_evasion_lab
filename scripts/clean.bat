@echo off
REM
rd /s /q ..\build

if %ERRORLEVEL% equ 0 (
    echo Clean successful!
) else (
    echo Clean failed or folder did not exist.
)
pause
