@echo off
set ct=cmdtool

%ct% h 1
rem this command will hide your cursor [0] to enable
%ct% c 0a "Hello World!"
%ct% n
%ct% c 0b "Hello World!"
rem decimal is easy than hexadecimal
%ct% n
rem "n" refers to newline.
%ct% c 0c "Hello World!"
%ct% n
%ct% c 0d "Hello World!"
%ct% n
%ct% c 0e "Hello World!"
%ct% n
%ct% c 0e "Hello World!"
%ct% n
%ct% c 0f "Hello World!"

rem i love decimal number than hexadecimal but you can use cmdtool_color_lib.bat to use hexadecimal numbers.
pause>nul