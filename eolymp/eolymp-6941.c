#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int gcd (int a, int b){
    if ( a == 0 )
        return b;            // Euclidean Algorithm (Great Common Divisor)
    return gcd (b % a, a);
}
int main (){
    short n;
    scanf("%hd", &n);
    while ( n > 0 )
    {
        short m, i = 0, j = 0;
        unsigned long sum = 0;
        scanf("%hd", &m);
        int arr[m];
        for ( ; i < m ; i++ ){
            scanf("%d", &arr[i]);
            for ( j = 0 ; j < i ; j++ ){
                sum += gcd(arr[i], arr[j]);
            }
        }
        printf("%lu\n", sum);
        n--;
    }
}
