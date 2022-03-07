#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    char str[10];
    scanf("%s", str);
    int sum = 0;   short length = strlen(str), count = 0;
    for ( short i = 1 ; i < length - 1 ; i++ ){
        if ( str[i] == '*' ){
            if ( i != 1 )
                sum *= ( str[i + 1] - 48 );
            else
                sum += ( str[i - 1] - 48 ) * ( str[i + 1] - 48 ); 
            count++;
        }
        else if ( str[i] == '+' ){
            if ( i != 1 )
                sum += ( str[i + 1] - 48 );
            else
                sum += ( str[i - 1] - 48 ) + ( str[i + 1] - 48 );
            count++;
        }
    }
    ( count == 0 ) ? (printf("%c", str[0])) : (printf("%d", sum));
}
