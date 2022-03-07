#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
uint64_t gcd (uint64_t a, uint64_t b){
    if (b==0)
        return a;
    return gcd(b,a%b);
}

int main(){
    uint64_t a,b;
    std::cin >> a >> b;
    std::cout << gcd(a,b);
}
