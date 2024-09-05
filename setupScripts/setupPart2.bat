@echo off

:: 4. add git token to colaborate (executed already from gitInstall.bat)
call "%myPath%\gccBasics-main\setupScripts\gitColab.bat" %myPath% %myRepo%

:: 5. open folder console and text editor sublime on the following path %myPath$
call "%myPath%\gccBasics-main\setupScripts\starts.bat" %myPath%