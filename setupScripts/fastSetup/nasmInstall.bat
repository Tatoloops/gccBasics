@echo off


:: --- Retrieve Path Section ---

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

REM Define the repository directory
set "repoPath=%myPath%\repositories"

REM Create the repository directory if it doesn't exist
if not exist "%repoPath%" (
    mkdir "%repoPath%"
)


:: --- Download Section ---

REM Set the URL and the output file name
set "URL=https://www.nasm.us/pub/nasm/releasebuilds/2.16.03/win64/nasm-2.16.03-win64.zip"
set "OUTPUT_FILE=%myPath%\nasm.zip"

REM Use curl to download the file with -L to follow redirects
curl -L -o "%OUTPUT_FILE%" "%URL%"

REM Check if the download was successful
if %errorlevel%==0 (
    echo Download completed successfully.
) else (
    echo Download failed.
    pause
    exit /b 1
)

:: --- Extraction Section ---

REM Option 1: Using 7-Zip
:: Uncomment the next line to use 7-Zip for extraction
:: "C:\Program Files\7-Zip\7z.exe" x "%OUTPUT_FILE%" -o"%myPath%" -y

REM Option 2: Using WinRAR
"C:\Program Files\WinRAR\WinRAR.exe" x "%OUTPUT_FILE%" "%myPath%\" -y

REM Check if extraction was successful
if %errorlevel%==0 (
    echo Extraction completed successfully.
) else (
    echo Extraction failed.
    pause
    exit /b 1
)

:: --- Add MinGW bin folder to PATH ---

REM Navigate to the bin folder
set "NASM_BIN=%myPath%\nasm-2.16.03"

REM Check if the bin folder exists
if exist "%NASM_BIN%" (
    echo Bin folder found: %NASM_BIN%
    REM Add the bin folder to PATH
    setx PATH "%PATH%;%NASM_BIN%"

    REM Confirm the addition to PATH
    if %errorlevel%==0 (
        echo Bin folder added to PATH successfully.
    ) else (
        echo Failed to add bin folder to PATH.
        pause
        exit /b 1
    )
) else (
    echo Bin folder not found: %NASM_BIN%
    echo Ensure that the extraction was successful and the folder structure is correct.
    pause
    exit /b 1
)


:: --- Clean up ---

REM Clean up by deleting the installer
del "%OUTPUT_FILE%"

echo - NASM added successfully!