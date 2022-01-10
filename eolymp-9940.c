#include <stdio.h>
#include <string.h>
#include <math.h>
unsigned long max ( unsigned long var1, unsigned long var2 ){
    return ( var1 > var2 ) ? var1 : var2;
}
unsigned long min ( unsigned long var1, unsigned long var2 ){
    return ( var1 < var2 ) ? var1 : var2;
}
int main(){
    unsigned long a, b, n;
    scanf("%lu %lu %lu", &n, &a, &b);
    unsigned long begin = pow(10,n-1);
    unsigned long end = pow(10,n)-1;
    if ( b < begin || a > end ){
        printf("0");
        return 0;
    }
    unsigned long result = min(end,b) - max(begin,a)+1;
    printf("%lu", result);
}
