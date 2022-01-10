#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
    short a,b;
    int n;
    scanf("%hd %hd %d", &a, &b, &n);
    if (n==0){
        printf("0");
        return 0;
    }
    int sum = a+(n/60)*b;
    if ((n/60)*60!=n){
        sum=sum+b;
    }
    printf("%d", sum);
}
