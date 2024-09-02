@echo off 

git pull

git merge

git add ./

git commit -m "changes made to %CD%"

git push

pause