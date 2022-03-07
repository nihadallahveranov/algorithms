#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

struct node{
    int data;
    struct node* next;
};

// Merge Single Linked List

typedef struct node node;

node* createList(int n){
    node* head = NULL;
    if ( n > 0 ){
        head = (node* ) malloc(sizeof(node));
        int data;
        scanf("%d", &data);
        head -> data = data;
        head -> next = NULL;
        node* iter = head;
        for ( int i = 1 ; i < n ; i++ ){
            iter -> next = (node* ) malloc(sizeof(node));
            iter = iter -> next;
            scanf("%d", &data);
            iter -> data = data;
            iter -> next = NULL;
        }
    }
    return head;
}

void printList(node* head){
    if ( head != NULL ){
        node* iter = head;
        while( iter != NULL ){
            printf("%d ", iter -> data);
            iter = iter -> next;
        }
        printf("\n");
    }
}

node* mergeList(node* l1, node* l2){
    if ( l1 != NULL ){
        int size = 0;
        node* iter = l1;
        while ( iter -> next != NULL )
        {
            size++;
            iter = iter -> next;
        }
        iter -> next = l2;
        while ( iter != NULL )
        {
            size++;
            iter = iter -> next;
        }
        iter = l1;
        for ( int i = 0 ; i < size ; i++ ){
            iter = l1;
            for ( int j = 1 ; j < size - i ; j++ ){
                if ( iter -> data > iter -> next -> data ){
                    int temp = iter -> next -> data;
                    iter -> next -> data = iter -> data;
                    iter -> data = temp;
                }
                iter = iter -> next;
            }
        }
        return l1;
    }
    else{
        node* iter = l2;
        int size = 0;
        while ( iter != NULL )
        {
            size++;
            iter = iter -> next;
        }
        iter = l2;
        for ( int i = 0 ; i < size ; i++ ){
            iter = l2;
            for ( int j = 1 ; j < size - i ; j++ ){
                if ( iter -> data > iter -> next -> data ){
                    int temp = iter -> next -> data;
                    iter -> next -> data = iter -> data;
                    iter -> data = temp;
                }
                iter = iter -> next;
            }
        }
        return l2;
    }
}

int main(){
    int n;
    scanf("%d", &n);
    node* list1 = NULL, *list2 = NULL;
    list1 = createList(n);
    printList(list1);
    scanf("%d", &n);
    list2 = createList(n);
    printList(list1);
    node* list3 = mergeList(list1, list2);
    printList(list3);
}
