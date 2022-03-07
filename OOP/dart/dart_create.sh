#! /bin/bash

echo -e 'Enter the project name: \c'
read projectName

dart create $projectName
sleep 5
cd $projectName
code .
