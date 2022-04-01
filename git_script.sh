#!/bin/bash

echo "Enter file/directory name"
read name
git add $name 
echo "Enter commit statement"
read stat
git commit -m "${stat}"

echo "Enter repository name"
read repo

git remote add origin https://github.com/Rajneesh-kr/{$repo}.git

git remote set-url origin https://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@github.com/Rajneesh-kr/${repo}.git

