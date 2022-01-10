#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
    char str[255];
    scanf("%[^\n]%*c", str);
    short size = strlen(str), i = 0, sum = 0;
    for ( ; i < size ; i++){
        sum=sum+str[i]-48;
    }
    if (sum%3==0){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    if (sum%3==0 && (str[size-1]-48)%2==0){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    if (sum%9==0){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
}
