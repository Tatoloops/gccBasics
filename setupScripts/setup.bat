@echo off

REM Welcome to the course, this scrip will download all neccesary files, just click next and accept everything.

echo executing script

REM Check if an argument is provided
if "%~1"=="" (
    REM If no argument is provided, set the default value
    set folderName=Librarium
) else (
    REM If an argument is provided, use it
    set folderName=%~1
)

:: 1. set up development path

::		 - Get the path to the current user's profile folder
set userFolder=%USERPROFILE%

::		 - Create the new folder in the user's folder
mkdir "%userFolder%\%folderName%"

set myPath="%userFolder%\%folderName%"

echo New folder "%folderName%" created in "%userFolder%"


:: 1. download mingw64 and add to path
mingw64Install.bat %myPath%

:: 2. install sublime text editor
sublimeInstall.bat %myPath%

:: 3. install git
gitInstall.bat %myPath%

:: 4. add git token to colaborate (executed already from gitInstall.bat)
:: gitColab.bat

:: 5. open folder console and text editor sublime on the following path %myPath$
starts.bat %myPath%\