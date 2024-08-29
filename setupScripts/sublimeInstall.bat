@echo off

set myPath=%1


curl -L -o "%myPath%\sublimeInstaller.exe" "https://download.sublimetext.com/sublime_text_build_4180_x64_setup.exe"

"%myPath%\sublimeInstaller.exe"

