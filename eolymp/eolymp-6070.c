#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

int main(){
    short n;
    scanf("%hd", &n);
    for ( short i = 1 ; i <= n ; i++ ){
        short m, count = 0;
        scanf("%hd", &m);
        char str[10];
        for ( short j = 0 ; j < m ; j++ ){
            scanf("%s", str);
            if ( strcmp(str, "sheep" ) == 0 )
                count++;
        }
        printf("Case %hd: This list contains %hd sheep.\n\n", i, count);
        count = 0;
    }
}
