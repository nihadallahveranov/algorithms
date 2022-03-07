#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
int main(){
    short n;
    std::cin >> n;
    short h[n],m[n],s[n];
    for ( short i = 0 ; i < n ; i++){
        std::cin >> h[i] >> m[i] >> s[i];
    }
    for ( short i = 0 ; i < n ; i++){
        for ( short j = 1 ; j < n-i ; j++){
            if (h[j-1]>h[j]){
                short htemp = h[j-1];
                short mtemp = m[j-1];
                short stemp = s[j-1];
                h[j-1]=h[j];
                h[j]=htemp;
                m[j-1]=m[j];
                m[j]=mtemp;
                s[j-1]=s[j];
                s[j]=stemp;
            }
            else if (h[j-1]==h[j]){
                if (m[j-1]>m[j]){
                    short mtemp = m[j-1];
                    short stemp = s[j-1];
                    m[j-1]=m[j];
                    m[j]=mtemp;
                    s[j-1]=s[j];
                    s[j]=stemp;
                }
                else if (m[j-1]==m[j]){
                    if (s[j-1]>s[j]){
                        short stemp = s[j-1];
                        s[j-1]=s[j];
                        s[j]=stemp;
                    }
                }
            }
        }
    }
    for ( short i = 0 ; i < n ; i++){
        std::cout << h[i] << " " << m[i] << " " << s[i] << std::endl;
    }
}
