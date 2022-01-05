#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
short Res(short* ptr, short n,uint32_t sum){
    double average=sum/n;
    short count=0;
    for ( short i = 0 ; i < n ; i++){
        if (ptr[i]>average){
            count++;
        }
    }
    return count;
}
int main(){
    short n;
    std::cin >> n;
    short arr[n];
    uint32_t sum=0;
    for ( short i = 0 ; i < n ; i++){
        std::cin >> arr[i];
        sum+=arr[i];
    }
    std::cout << Res(arr,n,sum);
}
