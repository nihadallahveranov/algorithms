#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <algorithm>
int main(){
    char x;
    std::cin >> x;
    short n,num=0;
    std::cin >> n;
    for ( int i = 0 ; i < n ; i++){
        for ( int j = 0 ; j<n-i-1 ; j++){
            num++;
        }
        for ( int j = 0 ; j <= i ; j++){
            num++;
        }
        for ( int j = 1 ; j <= i ; j++){
            num++;
        }
    }
    std::cout << num << std::endl;
    for ( int i = 0 ; i < n ; i++){
        for ( int j = 0 ; j<n-i-1 ; j++){
            std::cout << " ";
        }
        for ( int j = 0 ; j <= i ; j++){
            std::cout << x;
        }
        for ( int j = 1 ; j <= i ; j++){
            std::cout << x;
        }
        std::cout << std::endl;
    }
}
