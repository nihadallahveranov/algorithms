#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <cstring>
int main(){
    std::string str;
    std::cin >> str;
    short size=str.length();
    for ( short i = 0 ; i < size ; i++){
        if (str[i] > 47 && str[i] < 58){
            if ((str[i]-48)%2==1){
                continue;
            }
        }
        std::cout << str[i];
    }
}
