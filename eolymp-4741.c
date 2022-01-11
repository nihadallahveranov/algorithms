#include <stdio.h>
#include <string.h>
#include <math.h>
int bubblesort(int* ptr, short n){
    int num = 0;
    short i = 0, j = 1;
    for ( ; i < n ; i++){
        for ( j = 1 ; j < n-i ; j++){
            if (ptr[j-1]>ptr[j]){
                int temp=ptr[j-1];
                ptr[j-1]=ptr[j];
                ptr[j]=temp;
                num++;
            }
        }
    }
    return num;
}
int main(){
    short n, i = 0;
    scanf("%hd", &n);
    int a[n];
    for ( ; i < n ; i++)
        scanf("%d", &a[i]);
    printf("%d", bubblesort(a, n));
}
