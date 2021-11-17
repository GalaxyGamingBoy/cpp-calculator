@echo off
cls
g++ ./*/*.cpp -o out
echo ----- ----- -----
echo   Build  Output
echo ----- ----- -----
.\out.exe
