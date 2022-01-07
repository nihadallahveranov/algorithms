#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
using namespace std;
int main(){
    int16_t n,num=0;
    cin >> n;
    bool a[n][n];
    for ( int16_t i = 0 ; i < n ; i++ ){
        for ( int16_t j = 0 ; j < n ; j++){
            cin >> a[i][j];
        }
    }
    for ( int16_t i = 0 ; i < n ; i++){
        if (a[i][i]==1){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}
