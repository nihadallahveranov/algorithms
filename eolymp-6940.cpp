#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
void max_frequency(std::string* ptr, short n){
    short max = 0, count = 0;
    for ( short i = 0 ; i < n ; i++ ){
        for ( short j = 0 ; j < n ; j++ ){
            ( ptr[i] == ptr[j] ) ? count++ : count = count;
        }
        ( max < count ) ? max = count : max = max;
        count = 0;
    }
    char max_ascii_letter = 0;
    for ( short i = 0 ; i < n ; i++ ){
        for ( short j = 0 ; j < n ; j++ ){
            ( ptr[i] == ptr[j] ) ? count++ : count = count;
        }
        if ( max == count){
            ( ptr[i][0] > max_ascii_letter ) ? max_ascii_letter = ptr[i][0] : max_ascii_letter = max_ascii_letter;
        }
        count = 0;
    }
    for ( short i = n - 1 ; i >= 0 ; i-- ){
        for ( short j = n - 1 ; j >= 0 ; j-- ){
            ( ptr[i] == ptr[j] ) ? count++ : count = count;
        }
        if ( max == count && ptr[i][0] == max_ascii_letter ){
            std::cout << ptr[i] << " " << max;
            break;
        }
        count = 0;
    }    
}
int main(){
    short n;
    std::cin >> n;
    std::string str[n];
    for ( short i = 0 ; i < n ; i++ ){
        std::cin >> str[i];
    }
    max_frequency(str, n);
}
