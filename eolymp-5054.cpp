#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <cstring>
int main(){
    short n;
    std::cin >> n;
    if ((n%4==0 && n%100==0 && n%400==0) || (n%4==0 && n%100!=0)){
        std::cout << "YES";
    }
    else{
        std::cout << "NO";
    }
}
