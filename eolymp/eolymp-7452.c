#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct node{
    int data;
    struct node* next;
}*head;


typedef struct node node;


void printList(){
    node* iter = head;
    while( iter != NULL ){
        printf("%d ", iter -> data);
        iter = iter -> next;
    }
    printf("\n");
}

void createList(int n){
    head = (node* ) malloc(sizeof(node));
    node* iter = head;
    int data;
    scanf("%d", &data);
    head -> data = data;
    head -> next = NULL;
    for ( int i = 1 ; i < n ; i++ ){
        iter -> next = (node* ) malloc(sizeof(node));
        iter = iter -> next;
        scanf("%d", &data);
        iter -> data = data;
        iter -> next = NULL;
    }
}

// void addList(int n){
//     node* iter = head;
//     while ( iter -> next != NULL )
//     {
//         iter = iter -> next;
//     }
//     int data;
//     printf("enter the datas: ");
//     for ( int i = 0 ; i < n ; i++ ){
//         iter -> next = (node* ) malloc(sizeof(node));
//         iter = iter -> next;
//         scanf("%d", &data);
//         iter -> data = data;
//         iter -> next = NULL; 
//     }
// }

void reverse(int n){
    node* iter = head, *tmp = head;
    for ( int i = 0 ; i < n / 2 ; i++ ){
        for ( int j = 0 ; j < n - i - 1 ; j++ ){
            tmp = tmp->next;
        }
        int temp = iter -> data;
        iter -> data = tmp -> data;
        tmp -> data = temp;
        tmp = head;
        iter = iter -> next;
    }
}

int main(int argc, char** argv)
{
    int n;
    scanf("%d", &n);
    createList(n);
    printList();
    reverse(n);
    printList();
}
