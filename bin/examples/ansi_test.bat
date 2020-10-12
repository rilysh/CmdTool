@echo off
set ct=cmdtool

for /l %%A in (0,1,255) do (
    %ct% a %%A rem create ansi words

)
%ct% n rem it will show a new line.
pause>nul
exit