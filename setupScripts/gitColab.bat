@echo off

set "repoPath=%~1"


REM Set your Git username and token here
set "GIT_USER=Tatoloops"
set "GIT_TOKEN=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"

REM Set up the Git credentials using the credential helper
git config --global credential.helper store

REM Store the credentials (GitHub example)
echo https://%GIT_USER%:%GIT_TOKEN%@github.com > "%USERPROFILE%\.git-credentials"

REM Set up the repository URL (replace with your repository's URL)
set "REPO_URL=https://github.com/tatoloops/gccBasics.git"

REM Clone the repository into the specified directory
git clone "%REPO_URL%" "%repoPath%"

echo - git token added and repo gccBasics cloned!
