@echo off

:: 1. Create a new folder Librarium
set folderName=PrObAnDo

::         - Create the new folder in the user's folder
mkdir "%USERPROFILE%\%folderName%"

::set variables
set myPath=%USERPROFILE%\%folderName%
set myRepo=https://github.com/Tatoloops/gccBasics/archive/refs/heads/main.zip
set fileToExtract=%myPath%\repo.zip

::download repository
curl -L -o "%fileToExtract%" %myRepo%

:: Extract the zip file using the built-in File Explorer
powershell -command "Expand-Archive -Path '%fileToExtract%' -DestinationPath '%myPath%' -Force"

::execute main script
%myPath%\gccBasics-main\setupScripts\setup.bat