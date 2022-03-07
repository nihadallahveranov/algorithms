#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
int DecToBinary(int a, int k){
    int32_t res=0;
    short size=0;
    bool arr[32];
    for ( int i = 0 ; a > 0 ; i++){
        arr[i]=a%2;
        size++;
        a/=2;
    }
    for ( int i = 0 ; i < size ; i++){
        if (k>i){
            res+=arr[i]*pow(2,i);
        }
        else{
            return res;
        }
    }
    return res;
}
int main(){
    int a,k;
    std::cin >> a >> k;
    std::cout << DecToBinary(a,k);
}
