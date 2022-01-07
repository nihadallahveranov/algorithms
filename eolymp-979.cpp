#include<iostream>
#include<cmath>
#include<cstring>
#include<iomanip>
#include <random>
#include <cstdlib>
#include<ctime>
#include <algorithm>
using namespace std;
void sorting(int *ptr, int n, int q, int w){
    for ( int i = 0 ; i < n ; i++){
        if (ptr[q]==ptr[i]){
            cout << ptr[w] << " ";
            continue;
        }
        cout << ptr[i] << " ";
    }
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for ( int i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }
    int q,w;
    cin >> q >> w;
    q--;
    w--;
    sorting(a, n, q, w);
}
