#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <cstring>
int main(){
    uint64_t n;
    std::cin >> n;
    while (n%2==0){
        if (n/2!=1){
            std::cout << 2 << "*";
            n/=2;
        }
        else{
            std::cout << 2;
            n/=2;
        }
    }
    for ( int i = 3; i <= sqrt(n) ; i = i + 2){
        while (n % i == 0)
        {
            if (n/i!=1){
            std::cout << i << "*";
            n/=i;
        }
            else{
                std::cout << i;
                n/=i;
            }
        }
    }
    if (n>2){
        std::cout << n;
    }
}
