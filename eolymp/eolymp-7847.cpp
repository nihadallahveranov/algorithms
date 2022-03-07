#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <cstring>
short diffnum(short* ptr, short n){
    short count=0,num=0,num1=0;
    for ( short i = 0 ; i < n ; i++){
        for ( short j = 0 ; j < n;  j++){
            if (ptr[i]==ptr[j] && i!=j){
                num++;
                break;
            }
        }
        if (num==0){
            count++;
        }
        else{
            for ( short j = i-1 ; j >= 0 ; j--){
                if (ptr[i]==ptr[j]){
                    num1++;
                    break;
                }
            }
            if (num1==0){
                count++;
            }
            num1=0;
        }
        num=0;
    }
    return count;
}
int main(){
    short n;
    std::cin >> n;
    short a[n];
    for ( short i = 0 ; i < n ; i++){
        std::cin >> a[i];
    }
    std::cout << diffnum(a,n);
}
