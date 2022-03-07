#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
int main(){
    std::string str1,str2;
    std::cin >> str1 >> str2;
    int size1 = str1.length(), size2 = str2.length(), count1 = 0,count2 = 0;
    for ( short i = 0 ; i < size1 ; i++){
        for ( short j = 0 ; j < size1 ; j++){
            if (str1[i] == str1[j]){
                count1++;
            }
        }
        for ( short j = 0 ; j < size2 ; j++){
            if (str1[i] == str2[j]){
                count2++;
            }
        }
        if (count2 == 0){
            std::cout << "NO";
            return 0;
        }
        if (count2 < count1){
            std::cout << "NO";
            return 0;
        }
        count1 = 0;
        count2 = 0;
    }
    std::cout << "YES";
    return 0;
}
