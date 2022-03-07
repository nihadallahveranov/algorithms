#! /bin/bash
function unique_elements(){
	local var_arr=( "$@" )    # create new local arr variable
	local var_size=${#var_arr[@]}   # create new local size variable, show the size of array
	local j=0
	echo -n "unique elements: "    # -n  not new line
	for (( i = 0 ; i < var_size ; i++ ))
	do
		for (( j = 0 ; j < i ; j++ ))
		do
			if (( var_arr[i]==var_arr[j] ))
			then
				break
			fi
		done
		if (( i==j ))
		then
			echo -n "${var_arr[i]} "
		fi
	done
}
echo -e "Enter the size: \c"     # first step (Entry Point)
read size                            # input size of array
for (( i = 0 ; i < size ; i++ ))
do
  read arr[i]      # input elements of arrray
done
unique_elements "${arr[@]}"     # send arr parameter to our function unique_elements, let's go unique_elements
