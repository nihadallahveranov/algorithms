#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// Circular Linked List

struct node{
    int data;
    struct node* next;
};

typedef struct node node;

void printList(node* head){
    if ( head != NULL ){
        node* iter = head;
        printf("%d ", head -> data);
        iter = iter -> next;
        while ( iter != head )
        {
            printf("%d ", iter -> data);
            iter = iter -> next;
        }
        printf("\n");
    }
    else{
        printf("This List is Empty!\n");
    }
}

node* createList(int length){
    node* head = NULL;
    if ( length > 0 ){
        head = (node* ) malloc(sizeof(node));
        int data;
        scanf("%d", &data);
        head -> data = data;
        head -> next = head;
        node* iter = head;
        for ( int i = 1 ; i < length ; i++ ){
            iter -> next = (node* ) malloc(sizeof(node));
            iter = iter -> next;
            scanf("%d", &data);
            iter -> data = data;
            iter -> next = head;
        }
    }
    return head;
}

node* addList(node* head, int length){
    if ( length > 0 ){
        int data, i = 0;
        if ( head == NULL ){
            head = (node* ) malloc(sizeof(node));
            scanf("%d", &data);
            head -> data = data;
            head -> next = head;
            i++;
        }
        node* iter = head;
        while ( iter -> next != head )
            iter = iter -> next;
        for ( ; i < length ; i++ ){
            iter -> next = (node* ) malloc(sizeof(node));
            iter = iter -> next;
            scanf("%d", &data);
            iter -> data = data;
            iter -> next = head;
        }
    }
    return head;
}

int main(int argc, char** argv){
    node* list1 = NULL;
    int length;
    scanf("%d", &length);
    list1 = createList(length);
    printList(list1);
    scanf("%d", &length);
    list1 = addList(list1, length);
    printList(list1);
}
