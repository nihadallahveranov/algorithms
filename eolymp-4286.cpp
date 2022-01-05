#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <cstring>
int main(){
    std::string str;
    std::cin >> str;
    short size=str.length(),count=0;
    for ( short i = 0 ; i < size ; i++){
        short j = 0 ;
        for ( ; j < i ; j++){
            if (str[i]==str[j]){
                break;
            }
        }
        if (i==j){
            count++;
        }
    }
    std::cout << count;
}
