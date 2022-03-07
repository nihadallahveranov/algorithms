#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
    char str[16];
    scanf("%s", str);
    int length = strlen(str), decimal = 0;
    for ( short i = 0 ; i < length ; i++ ){
        if ( str[i] == '1' )
            decimal += ( str[i] - 48 ) * pow(2, length - i - 1);
    }
    printf("%d", decimal);
}
