#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <time.h>

int size;
int* stack_arr = NULL;
int top = 0;

int pop(){
    if ( top <= 0 || stack_arr == NULL ){
        printf("Stack is Empty!\n");
        return -1;
    }
    if ( top * 4 <= size ){
        int* stack_arr_temp = (int* ) malloc(sizeof(int) * (size / 2));
        for ( int i = 0 ; i < top ; i++ ){
            stack_arr_temp[i] = stack_arr[i];
        }
        free(stack_arr);
        stack_arr = stack_arr_temp;
        size /= 2;
    }
    return stack_arr[--top];
}

void push(int data){
    if ( top == size ){
        int* stack_arr_temp = (int* ) malloc(sizeof(int) * size * 2);
        for ( int i = 0 ; i < top ; i++ ){
            stack_arr_temp[i] = stack_arr[i];
        }
        free(stack_arr);
        stack_arr = stack_arr_temp;
        size *= 2;
    }
    stack_arr[top++] = data;
}

void print(){
    for ( int i = 0 ; i < top ; i++ )
        printf("%d ", stack_arr[i]);
    printf(" size: %d\n", size);
}

int main(){
    srand(time(NULL));
    size = rand() % 10;
    stack_arr = (int* ) malloc(sizeof(int) * size);
    for ( int i = 0 ; i < size ; i++ ){
        push(rand() % 25);
    }
    printf("First input: ");    print();
    int length = rand() % 10;
    for ( int i = 0 ; i < length ; i++ ){
        push(rand() % 25);
    }
    printf("Elements of Stack Array: ");    print();
    for ( int i = 0 ; i < rand() % 10 ; i++ ){
        printf("Popped Element: %d\n", pop());
    }
    printf("Elements that After Popping the Stack Array: ");    print();
    for ( int i = 0 ; i < rand() % 10 ; i++ ){
        push(rand() % 25);
    }
    printf("Elements of Stack Array: ");    print();
    for ( int i = 0 ; i < rand() % 15 ; i++ ){
        printf("Popped Element: %d\n", pop());
    }
    printf("Elements that After Popping the Stack Array: ");    print();
    /*
        Random Input and Output:
        First input: 20  size: 1
        Elements of Stack Array: 20 2 17 19 2 3 6 6  size: 8
        Popped Element: 6
        Popped Element: 6
        Popped Element: 3
        Popped Element: 2
        Elements that After Popping the Stack Array: 20 2 17 19  size: 8
        Elements of Stack Array: 20 2 17 19  size: 8
        Popped Element: 19
        Popped Element: 17
        Popped Element: 2
        Elements that After Popping the Stack Array: 20  size: 4
    */
}
