#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <algorithm>
float avg(short* ptr, short n){
    float sum = 0, count = 0;
    for ( short i = 0 ; i < n ; i++ ){
        short j = 0;
        for ( j = 0 ; j < i ; j++ ){
            if ( ptr[i]==ptr[j] ){
                break;
            }
        }
        if ( i==j ){
            sum+=ptr[i];
            count++;
        }
    }
    return sum/count;
}
int main(){
    short n;
    std::cin >> n;
    short arr[n];
    for ( short i = 0 ; i < n ; i++)
        std::cin >> arr[i];
    std::cout << std::fixed << std::setprecision(4) << avg(arr, n);
}
