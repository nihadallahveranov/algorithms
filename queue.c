#include <stdio.h>
#include <stdlib.h>

//  FIFO

struct queue{
    int val;
    struct queue* next;
};

typedef struct queue queue;

queue* enqueue(queue* head, int new_val){
    if ( head != NULL ){
        queue* iter = head;
        while ( iter -> next != NULL )
            iter = iter -> next;
        iter -> next = (queue* ) malloc(sizeof(queue));
        iter -> next -> val = new_val;
        iter -> next -> next = NULL;
    }
    else{
        head = (queue* ) malloc(sizeof(queue));
        head -> val = new_val;
        head -> next = NULL;
    }
    return head;
}

queue* dequeue(queue* head){
    if ( head == NULL ){
        printf("This Queue is Empty!\n");
        return NULL;
    }
    queue* temp = head;
    head = head -> next;
    free(temp);
    return head;
}

void print(queue* head){
    if ( head != NULL ){
        while ( head != NULL )
        {
            printf("%d ", head -> val);
            head = head -> next;
        }
        printf("\n");
    }
    else
       printf("This Queue is Empty!\n"); 
}

int main(int argc, char** argv){
    queue* queue1 = NULL;
    int num;
    print(queue1);
    scanf("%d", &num);
    for ( int i = 0 ; i < num ; i++){
        int new_val;
        scanf("%d", &new_val);
        queue1 = enqueue(queue1, new_val);
    }
    print(queue1);
    scanf("%d", &num);
    for ( int i = 0 ; i < num ; i++)
        queue1 = dequeue(queue1);
    print(queue1);
}
