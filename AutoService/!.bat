@echo off
echo.
echo Virtual World (VWorld) Simulator ver. 1.0 (29.07.2002)
if %1.==. goto nocom
echo !A_SRC ..\ VWRLDS %1 ..\AutoBuild.h !exclude.txt E:\MYDOCU~1\BACKUP
echo.
echo !A_SRC ..\ VWRLDS %1 ..\AutoBuild.h !exclude.txt E:\MYDOCU~1\BACKUP %2
if %2.==.     call !A_SRC ..\ FTPP %1 ..\AutoBuild.h !exclude.txt E:\MYDOCU~1\BACKUP
if not %2.==. call !A_SRC ..\ FTPP %1 ..\AutoBuild.h !exclude.txt E:\MYDOCU~1\BACKUP %2
goto end
:nocom
echo Type Build number !!! Ex: !makeres 10
:end
