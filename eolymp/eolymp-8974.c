#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
    short n, num = 0, num2 = 0, num3 = 0;
    scanf("%hd", &n);
    short a[n], i = 0, j = 0;
    for ( ; i < n ; i++)
        scanf("%hd", &a[i]);
    short* ptr = a;
    for (  i = n - 1 ; i >= 0 ; i-- ){
        for (  j = n - 1 ; j >= 0 ; j-- ){
            if ( a[i] == a[j] && i != j ){
                num++;
                break;
            }
        }
        if (num>0){
            for ( j = n-1 ; j > i ; j-- ){
                if ( a[i] == a[j] ){
                    num2++;
                    break;
                }
            }
            if ( num2 == 0 ){
                num3++;
                ptr[n - num3] = a[i];
            }
        }
        num=0;
        num2=0;
    }
    if ( num3 == 0 ){
        printf("NO");
    }
    else{
        for ( ; num3>0 ; num3--){
            printf("%hd ", ptr[n-num3]);
        }
    }
}
