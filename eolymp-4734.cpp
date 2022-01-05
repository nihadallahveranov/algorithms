#include<iostream>
#include<cmath>
#include<cstring>
#include<iomanip>
int main(){
    std::string str;
    std::cin >> str;
    short size=str.size();
    short sum=0;
    for ( short i = 0 ; i < size ; i++){
        sum=sum+str[i]-48;
    }
    if (sum%3==0){
        std::cout << "Yes" << std::endl;
    }
    else{
        std::cout << "No" << std::endl;
    }
    if (sum%3==0 && (str[size-1]-48)%2==0){
        std::cout << "Yes" << std::endl;
    }
    else{
        std::cout << "No" << std::endl;
    }
    if (sum%9==0){
        std::cout << "Yes" << std::endl;
    }
    else{
        std::cout << "No" << std::endl;
    }
}
