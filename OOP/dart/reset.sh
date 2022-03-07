#! /bin/bash

git checkout --orphan newBranch
git add .
git commit -m "latest commit"
git branch -D main
git branch -m main
git push origin main --force
