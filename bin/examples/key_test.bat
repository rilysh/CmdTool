@echo off
:main
cmdtool r
echo press enter key 
cmdtool k
if %errorlevel%==13 goto :enter
if not %errorlevel%==13 goto:wrong
goto :main
:wrong
echo wrong key!
pause
goto main

:enter
echo :) enter

pause>nul
