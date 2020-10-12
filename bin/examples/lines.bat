@echo off

:lorem
setlocal enabledelayedexpansion
set text="Hello World, World is free of Softwares! You can download anything if you know the website name!"
for %%A in (0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f) do (
    REM call :r
    cmdtool c %%A
	cmdtool n
	cmdtool p !text!
	cmdtool n
	cmdtool p !text!
	cmdtool n
	cmdtool p !text!
	cmdtool n
	cmdtool p !text!
    cmdtool n
	cmdtool p !text!
	)
	pause>nul
goto :eof