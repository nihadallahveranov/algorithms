#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
uint64_t gcd(uint64_t a, uint64_t b){
    if (b==0)
        return a;
    return gcd(b, a%b);
}
uint64_t lcm(uint64_t a, uint64_t b){
    return (a / gcd(a,b)) * b;
}
int main(){
    uint64_t a,b;
    std::cin >> a >> b;
    std::cout << lcm(a,b);
}
