#include<iostream>
#include<cmath>
#include<cstring>
#include<iomanip>
using namespace std;
int main(){
    int n,num=0;
    std::cin >> n;
    std::string str[n],str2[n];
    for ( int i = 0 ; i < n ; i++){
        std::cin >> str[i] >> str2[i];
    }
    for ( int i = 0 ; i < n ; i++){
        int size=str[i].size();
        for ( int j = 0 ; j < size ; j++){
            for ( int l = 1 ; l < size-j ; l++){
                if (str[i][l-1]>str[i][l]){
                    char temp = str[i][l-1];
                    str[i][l-1]=str[i][l];
                    str[i][l]=temp;
                }
            }
        }
    }
    for ( int i = 0 ; i < n ; i++){
        int size2=str2[i].size();
        for ( int j = 0 ; j < size2 ; j++){
            for ( int l = 1 ; l < size2-j ; l++){
                if (str2[i][l-1]>str2[i][l]){
                    char temp = str2[i][l-1];
                    str2[i][l-1]=str2[i][l];
                    str2[i][l]=temp;
                }
            }
        }
    }
    for ( int i = 0 ; i < n ; i++){
        int size=str[i].size();
        int size2=str2[i].size();
        if (size==size2){
            for ( int j = 0 ; j < size ; j++){
                if (str[i][j]!=str2[i][j]){
                    num++;
                }
            }
            if (num>0){
                std::cout << "NO" << endl;
            }
            else if (num==0){
                std::cout << "YES" << endl;
            }
            num=0;
        }
        else{
            std::cout << "NO" << endl;
        }
    }
}
