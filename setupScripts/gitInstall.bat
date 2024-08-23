@echo off

REM Check if Git is installed
git --version >nul 2>&1
IF ERRORLEVEL 1 (
    echo Git is not installed. Downloading and installing Git...

    REM Define the URL for the Git installer (Windows 64-bit)
    set GIT_URL=https://github.com/git-for-windows/git/releases/latest/download/Git-2.42.0-64-bit.exe

    REM Define the file name for the installer
    set GIT_INSTALLER=git-installer.exe

    REM Download the Git installer using curl or another tool
    curl -L -o %GIT_INSTALLER% %GIT_URL%

    REM Run the installer silently (with default options)
    start /wait %GIT_INSTALLER% /SILENT

    REM Clean up by deleting the installer
    del %GIT_INSTALLER%

    echo Git installation complete.
) ELSE (
    echo Git is already installed.
)

REM Set your Git username and token here
set GIT_USER=Tatoloops
set GIT_TOKEN=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

REM Set up the Git credentials using the credential helper
git config --global credential.helper store

REM Store the credentials (GitHub example)
echo https://%GIT_USER%:%GIT_TOKEN%@github.com > %USERPROFILE%\.git-credentials

REM Set up the repository URL (replace with your repository's URL)
set REPO_URL=https://github.com/YourUsername/YourRepository.git

REM Clone the repository
git clone %REPO_URL%

REM Change to the repository directory
cd YourRepository

echo Setup complete! You can now pull, commit, and push changes.
pause
