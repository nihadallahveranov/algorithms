#! /bin/bash
#Bubble Sort Algorithm
function MyFunc(){
	arr=( "$@" )
	size=${#arr[@]}
	for (( i = 0 ; i < size ; i++ ))
	do 
		for (( j = 1 ; j < size-i ; j++ ))
		do
			if (( arr[j-1] > arr[j] ))
			then
				temp=${arr[j-1]}
				arr[j-1]=${arr[j]}
				arr[j]=$temp
			fi
		done
	done
}
echo -e "Enter The Size Of Array: \c"
read size
for (( i = 0 ; i < size ; i++ ))
do
	read arr[i]
done
MyFunc "${arr[@]}"
echo
echo
echo ${arr[@]}
