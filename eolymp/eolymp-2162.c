#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

int main(){
    char str[1000];
    scanf("%[^\n]*c", str);
    int n = strlen(str);
    char str1[n];
    int j = 0;
    for ( int i = 0 ; i < n ; i++ ){
        if ( str[i] != ' ' ){
            str1[j] = str[i];
            j++;
        }
    }
    str1[j] = '\0';
    char str2[j];
    for ( int i = 0 ; i < j ; i++ ){
        str2[i] = str1[j - i - 1];
    }
    str2[j] = '\0';
    ( strcmp(str1, str2) == 0 ) ? (printf("YES")) : (printf("NO"));
}
