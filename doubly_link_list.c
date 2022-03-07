#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

struct list
{
    int data;
    struct list* next;
    struct list* prev;
};

typedef struct list list;

list* createList(int length){
    list* head = NULL;
    if ( length > 0 ){
        int new_data;
        head = (list* ) malloc(sizeof(list));
        scanf("%d", &new_data);
        head -> data = new_data;
        head -> prev = NULL;
        head -> next = NULL;
        list* iter = head;
        for ( int i = 1 ; i < length ; i++ ){
            iter -> next = (list* ) malloc(sizeof(list));
            iter -> next -> prev = iter;
            iter = iter -> next;
            scanf("%d", &new_data);
            iter -> data = new_data;
            iter -> next = NULL;
        }
    }
    return head;
}

void printList(list* head){
    if ( head != NULL ){
        list* iter = head;
        while ( iter != NULL )
        {
            printf("%d ", iter -> data);
            iter = iter -> next;
        }
        printf("\n");
    }
}

list* reverseList(list* head){
    if ( head != NULL ){
        int length = 1;
        list* iter1 = head, *iter2 = head;
        while ( iter1 -> next != NULL ){
            length++;
            iter1 = iter1 -> next;
        }
        if ( length % 2 == 1 ){
            while ( iter2 != iter1 )
            {
                int temp = iter2 -> data;
                iter2 -> data = iter1 -> data;
                iter1 -> data = temp;
                iter1 = iter1 -> prev;
                iter2 = iter2 -> next;
            } 
        }
        else{
            for ( int i = 0 ; i < length / 2 ; i++ ){
                int temp = iter2 -> data;
                iter2 -> data = iter1 -> data;
                iter1 -> data = temp;
                iter1 = iter1 -> prev;
                iter2 = iter2 -> next;
            }
        }
    }
    return head;
}

list* addList(list* head, int index, int length){
    int new_data;
    if ( head != NULL ){
        if ( length > 0 && index >= 0 ){
            if ( index == 0 ){
                list* iter = (list* ) malloc(sizeof(list));
                iter -> prev = NULL;
                scanf("%d", &new_data);
                iter -> data = new_data;
                iter -> next = NULL;
                list* temp = iter;
                for ( int i = 1 ; i < length ; i++ ){
                    iter -> next = (list* ) malloc(sizeof(list));
                    scanf("%d", &new_data);
                    iter -> next -> prev = iter;
                    iter = iter -> next;
                    iter -> data = new_data;
                    iter -> next = NULL;
                }
                iter -> next = head;
                head -> prev = iter;
                head = temp;
            }
            else{
                int count = 1;
                list* temp = head;
                for ( ; count < index && temp -> next != NULL ; count++ )
                    temp = temp -> next;
                if ( count != index )
                    return head;
                list* iter = (list* ) malloc(sizeof(list));
                scanf("%d", &new_data);
                iter -> prev = NULL;
                iter -> data = new_data;
                iter -> next = NULL;
                list* temp2 = iter;
                for ( int i = 1 ; i < length ; i++ ){
                    iter -> next = (list* ) malloc(sizeof(list));
                    iter -> next -> prev = iter;
                    iter = iter -> next;
                    scanf("%d", &new_data);
                    iter -> data = new_data;
                    iter -> next = NULL;
                }
                iter -> next = temp -> next;
                temp -> next = temp2;
                temp2 -> prev = temp;
            }
        }
        else
            return head;
    }
    else{
        if ( index == 0 )
            head = createList(length);
    }
    return head;
}

list* delindex(list* head, int index){
    if ( head != NULL ){
        if ( index == 0 ){
            list* temp = head;
            head = head -> next;
            head -> prev = NULL;
            free(temp);
        }
        else{
            list* iter = head;
            int length = 0;
            while ( iter != NULL )
            {
                length++;
                iter = iter -> next;
            }
            if ( length > index ){
                iter = head;
                for ( int i = 1 ; i < index ; i++ ){
                    iter = iter -> next;
                }
                list* temp = iter -> next;
                iter -> next = iter -> next -> next;
                if ( iter -> next != NULL )
                    iter -> next -> prev = iter;
                free(temp);
            }
        }
    }
    return head;
}

int main(int argc, char** argv){
    int length;     scanf("%d", &length);
    list* list1 = createList(length);
    int index;  scanf("%d", &index); 
    list1 = delindex(list1, index);
    printList(list1);
}
