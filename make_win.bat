@echo off
:main
cls
echo.
echo Processing and compiling...
tcc\tcc.exe src\cmdtool.c -o CmdTool.exe
upx --ultra-brute CmdTool.exe>nul
copy CmdTool.exe examples>nul
echo Done!
pause
REM start cmd
REM exit