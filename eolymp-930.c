#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
    char str[20];
    scanf("%[^\n]%*c", str);
    short size = strlen(str), num = 0, num1 = 0, i = 0, j = 0;
    for ( ; i < 10 ; i++){
        for ( j = 0 ; j < size ; j++){
            if (str[j] == i+48){
                num++;
                break;
            }
        }
        if (num == 0){
            num1++;
        }
        num = 0;
    }
    printf("%hd\n", num1);
    num = 0;
    for ( i = 0 ; i < 10 ; i++){
        for ( j = 0 ; j < size ; j++){
            if (str[j] == i+48){
                num++;
                break;
            }
        }
        if (num == 0){
            printf("%hd ", i);
        }
        num = 0;
    }
}
