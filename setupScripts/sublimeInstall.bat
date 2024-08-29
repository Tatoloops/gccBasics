@echo off
setlocal enabledelayedexpansion

REM Check if an argument is provided
if "%~1"=="" (
    REM If no argument is provided, set the default value and create the directory
    set "myPath=%USERPROFILE%\Librarium"
    if not exist "%myPath%" (
        mkdir "%myPath%"
    )
) else (
    REM If an argument is provided, use it
    set "myPath=%~1"
)

REM Define the directory where the installer will be saved
set "installerPath=%myPath%"

REM Define the installer file name and URL
set "SUBLIME_URL=https://download.sublimetext.com/sublime_text_build_4180_x64_setup.exe"
set "SUBLIME_INSTALLER=SublimeTextInstaller.exe"

REM Download the Sublime Text installer using curl
curl -L -o "%installerPath%\%SUBLIME_INSTALLER%" "%SUBLIME_URL%"

REM Run the installer silently (with default options)
start /wait "%installerPath%\%SUBLIME_INSTALLER%" /SILENT

REM Check if installation was successful
if %errorlevel%==0 (
    echo Sublime Text installation complete.
) else (
    echo Sublime Text installation failed.
    pause
    exit /b 1
)

REM Clean up by deleting the installer
del "%installerPath%\%SUBLIME_INSTALLER%"

echo Sublime Text has been installed.

