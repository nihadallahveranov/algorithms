#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
int main(){
    short n;
    while (std::cin >> n){
        if (n == 0){
            return 0;
        }
        for ( short i = 0 ; i < n ; i++){
            for ( short j = 1 ; j < n-i ; j++){
                std::cout << " ";
            }
            for ( short j = 0 ; j < i*2+1 ; j++){
                std::cout << "*";
            }
            std::cout << std::endl;
        }
        for ( short i = 1 ; i < n ; i++){
            for ( short j = 0 ; j < i ; j++){
                std::cout << " ";
            }
            for ( short j = 0 ; j < n*2-i*2-1 ; j++){
                std::cout << "*";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
}
