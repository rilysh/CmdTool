@echo off
echo hello >tmp.txt
echo created.
cmdtool s 2
rem this command refers sleep for 2 second
cmdtool d tmp.txt
echo deleted.
pause