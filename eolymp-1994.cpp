//I need your help
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <random>
#include <printf.h>
int main(){
    std::string brackets;
    unsigned short test, index;
    std::cin >> brackets;
    std::cin >> test;
    for ( unsigned short i = 0 ; i < test ; i++ ){
        std::cin >> index;
        ( brackets[index] == ')' ) ? brackets[index] = '(' : brackets[index] = ')';
        unsigned short countl = 0, countr = 0;
        for ( unsigned short j = 0 ; j < brackets.length() ; j++){
            ( brackets[j] == '(') ? countl++ : countr++;
        }
        ( countr == countl && brackets[0] != ')' && brackets[brackets.length()-1] != '(') ? std::cout << "+" << std::endl : std::cout << "-" << std::endl;
        countl = 0; countr = 0;
    }
}
