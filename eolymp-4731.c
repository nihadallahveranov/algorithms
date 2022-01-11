#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
    short n,max=1,num=0,a[10000],num1=0, i = 0;
    for ( ; i!=-1 ; i++){
        scanf("%hd", &n);
        a[i]=n;
        if (n==0){
            break;
        }
        if (max<=n){
            max=n;
        }
        num++;
    }
    for ( i = 0 ; i < num ; i++){
        if (max==a[i]){
            num1++;
        }
    }
    printf("%hd", num1);
}
