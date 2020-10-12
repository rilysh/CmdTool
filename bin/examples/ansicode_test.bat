@echo off
set ct=cmdtool
mode 25,15
%ct% r
%ct% n & %ct% n
%ct% s 100 & %ct% c 0a & %ct% a 219 & %ct% s 100 & %ct% c 0b & %ct% a 219 & %ct% s 100 & %ct% c 0c & %ct% a 219 & %ct% s 100 & %ct% c 0d & %ct% a 219 & %ct% s 100 & %ct% c 0e & %ct% a 219 & %ct% s 100 & %ct% c 0f & %ct% c 0f & %ct% a 219 & %ct% s 100 & %ct% c 15 & %ct% a 219 & %ct% s 100 & %ct% c 9 & %ct% a 219 & %ct% s 100 & %ct% c 10 & %ct% a 219 & %ct% s 100 & %ct% c 0c & %ct% a 219 & %ct% s 100 & %ct% c 0d & %ct% a 219 & %ct% s 100 & %ct% c 0e & %ct% a 219 & %ct% s 100 & %ct% c 0f & %ct% a 219 & %ct% s 100 & %ct% c 15 & %ct% a 219 & %ct% s 100 & %ct% c 9 & %ct% a 219 & %ct% s 100 & %ct% c 10 & %ct% a 219 & %ct% s 100 & %ct% c 0c & %ct% a 219 & %ct% s 100 & %ct% c 0d & %ct% a 219 & %ct% s 100 & %ct% c 0e & %ct% a 219 & %ct% s 100 & %ct% c 0f & %ct% a 219 & %ct% s 100 & %ct% c 15 & %ct% a 219 & %ct% s 100
%ct% n & %ct% n & %ct% n
%ct% s 100 & %ct% a 176 & %ct% s 100 & %ct% a 176 & %ct% s 100 & %ct% a 176 & %ct% s 100 & %ct% a 176 & %ct% s 100 & %ct% a 176 & %ct% s 100 & %ct% a 176 & %ct% s 100 & %ct% a 176 & %ct% s 100 & %ct% a 176 & %ct% s 100 & %ct% a 176 & %ct% s 100 & %ct% a 176 & %ct% s 100 & %ct% a 176 & %ct% s 100 & %ct% a 176 & %ct% s 100 & %ct% a 176 & %ct% s 100 & %ct% a 176 & %ct% s 100 & %ct% a 176 & %ct% s 100 & %ct% a 176 & %ct% s 100 & %ct% a 176 & %ct% s 100 & %ct% a 176 & %ct% s 100 & %ct% a 176 & %ct% s 100 & %ct% a 176 & %ct% s 100 & %ct% a 176 
%ct% n & %ct% n
:main
%ct% c 0b "Press enter"
%ct% k
if %errorlevel%==13 goto :sc
goto main
:sc
cmdtool r
cmdtool c 0e "Ok ;) you enter! any key and exit!
pause>nul