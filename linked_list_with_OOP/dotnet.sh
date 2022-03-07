#! /bin/bash
# for create and run project
echo -e 'Enter the project name: \c'
read projectName
dotnet new console -o $projectName
sleep 5

cd $projectName
code .
dotnet run