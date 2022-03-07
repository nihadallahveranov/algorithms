#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <cstring>
int main(){
    std::string str;
    getline(std::cin, str);
    short size = str.length();
    for ( short i = 0 ; i < size ; i++){
        if (str[i]>96 && str[i]<123){
            str[i]=char(str[i]-32);
        }
    }
    std::cout << str;
}
