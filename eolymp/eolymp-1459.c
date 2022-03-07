#include <stdio.h>
#include <string.h>
#include <math.h>
#include <inttypes.h>
int main(){
    short n;
    scanf("%hd", &n);
    int a[n], min = __INT_MAX__, i = 0;
    for ( ; i < n ; i++){
        scanf("%d", &a[i]);
        if (min > a[i]){
            min = a[i];
        }
    }
    int min2 = a[0];
    for ( i = 0 ; i < n ; i++){
        if (min != a[i] && min2 > a[i]){
            min2 = a[i];
        }
    }
    printf("%d %d", min, min2);
}
