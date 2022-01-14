#include <stdio.h>
int main(){
    char x;
    scanf("%c", &x);
    short n, count = 0, i = 0, j = 0;
    scanf("%hd", &n);
    for ( ; i < n ; i++){
        for ( j = 0 ; j < n - i - 1 ; j++){
            count++;
        }
        for ( j = 0 ; j <= i ; j++){
            count++;
        }
        for ( j = 1 ; j <= i ; j++){
            count++;
        }
    }
    printf("%d\n", count);
    for ( i = 0 ; i < n ; i++){
        for ( j = 0 ; j < n - i - 1 ; j++){
            printf(" ");
        }
        for ( j = 0 ; j <= i ; j++){
            printf("%c", x);
        }
        for ( j = 1 ; j <= i ; j++){
            printf("%c", x);
        }
        printf("\n");
    }
}
