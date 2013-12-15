REM @echo off

REM add everything in the folders
git add -A

set /p message= Write a commit message here; 

REM The descriptive message that'll appear in bitbucket
git commit -am %message%

set /p branch= put in a specific branch?(press enter for "no")

REM if theres a branch, push to that, 
REM otherwise push to master

IF /I %branch%==""(
git push -u origin master
) ELSE(
git push -u origin %branch%
)

REM set /p UserInputPath= What Directory would you like?
REM cd C:\%UserInputPath%
REM title C:\%UserInputPath%

set /p exit = exit?(Just hit enter)