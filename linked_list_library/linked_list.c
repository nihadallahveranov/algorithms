#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

#include "linked_list.h"

/*
 * Single and Circular Linked Lists.
 * This Library (linked_list.h) Was Developed By Nihad Allahveranov.
 * This Library (linked_list.h) Has Functions Ready To Work With LinkedLists.
 * All functions were abstracted.
 * So you can use lists as you like.
 * -Snake Case-
 * -Pascal Case-
 * -Camel Case-
 */


LinkedList* createList(long int length){ 

    /*
     * This function allows you to create nodes up to the value of the variable 'length' sent as a parameter.
     * Warning! simply creates a new linkedlist.
     * Invalid for a created linkedlist.
     * For example: LinkedList* list1 = createList(10);
     * Allocates 10 memory nodes in this list and receives data from user.
     * And finally returns the head pointer.
     */

    LinkedList* head = NULL;
    if (length > 0){
        int newData; 
        head = (LinkedList* ) malloc(sizeof(LinkedList));
        scanf("%d", &newData);                                         
        head -> data = newData;                           
        head -> next = NULL;      
        LinkedList* iter = head;                   
        for (long int i = 1 ; i < length ; i++){                   
            iter -> next = (LinkedList* ) malloc(sizeof(LinkedList));  
            iter = iter -> next;
            scanf("%d", &newData);
            iter -> data = newData;
            iter -> next = NULL;
        } 
    }   
    return head;   
    // Time Complexity: O(n) - Linear Time.
}


LinkedList* reverseList(LinkedList* head){

    /*
     * This function allows you to reverse the list sent as a parameter.
     * The algorithm reverses the pointers and thus the list is reversed.
     * And finally returns the head pointer.
     * For example: list = [1 -> 2 -> 3 -> 4 -> 5 -> null]; head: 1
     * reverseList(list);
     * Return: [null <- 1 <- 2 <- 3 <- 4 <- 5] or [5 -> 4 -> 3 -> 2 -> 1 -> null]; head: 5
     */

    if (head != NULL){
        LinkedList* iter = head, *temp, *prev = NULL;
        while (iter != NULL)
        {
            temp = iter -> next;
            iter -> next = prev;
            prev = iter;
            iter = temp;
        }
        head = prev;
    }
    return head;
    // Time Complexity: O(n) - Linear Time.
}


LinkedList* pushList(LinkedList* head, int newData){

    /*
     * This function assigns a new node push to the list sent as a parameter and 
     * the new_data sent as a parameter to the data of that node.
     * If the list is empty, head allocation is made.
     * Otherwise, the iterator goes to the last node in the list and a new node is allocated to its next.
     * For example: list = [1, 2, 3];
     * pushList(list, 4);
     * Return: [1 -> 2 -> 3 -> 4 -> null];
     */

    if (head != NULL){
        LinkedList* iter = head;
        LinkedList* temp = (LinkedList* ) malloc(sizeof(LinkedList));
        temp -> data = newData;
        temp -> next = NULL;
        while (iter -> next != NULL )
            iter = iter -> next;
        iter -> next = temp;
    }
    else{
        head = (LinkedList* ) malloc(sizeof(LinkedList));
        head -> data = newData;
        head -> next = NULL;
    }
    return head;
    // Time Complexity: O(n) - Linear Time.
}


LinkedList* addHeadList(LinkedList* head, int newData){

    /*
     * This function adds a node to the head of the list.
     * If no list is created, a list is created on the head pointer and returned.
     * For example: list = [3, 4, 5];
     * addHeadList(list, 2);
     * Return: [2 -> 3 -> 4 -> 5 -> null];
     */

    if (head != NULL){
        LinkedList* iter = (LinkedList* ) malloc(sizeof(LinkedList));
        iter -> data = newData;
        iter -> next = head;
        head = iter;
    }
    else{
        head = (LinkedList* ) malloc(sizeof(LinkedList));
        head -> data = newData;
        head -> next = NULL;
    }
    return head;
    // Time Complexity: O(1) - Constant Time.
}


LinkedList* addIndexList(LinkedList* head, unsigned int index, int newData){

    /*
     * This function adds a node to the list according to the index.
     * For example: list = [1, 3, 4, 5]
     * addIndexList(list, 1); (data: 2)
     * Return: [1 -> 2 -> 3 -> 4 -> 5 -> null];
     */

    if (head != NULL){
        if (index > 0 && index <= lengthList(head)){
            LinkedList* iter = head;
            for (int i = 1 ; i < index ; i++)
                iter = iter -> next;
            LinkedList* temp = (LinkedList* ) malloc(sizeof(LinkedList));
            temp -> data = newData;
            temp -> next = iter -> next;
            iter -> next = temp;
        }
        else if (index == 0){
            LinkedList* iter = (LinkedList* ) malloc(sizeof(LinkedList));
            iter -> data = newData;
            iter -> next = head;
            head = iter;
        }
    }
    else{
        if (index == 0){
            head = (LinkedList* ) malloc(sizeof(LinkedList));
            head -> data = newData;
            head -> next = NULL;
        }
    }
    return head;
    // Time Complexity: O(n) - Linear Time.
}


LinkedList* popList(LinkedList* head){

    /*
     * This function dynamically removes the last node from the list.
     * For example: list = [1, 2, 3];
     * popList(list);
     * Return: list = [1, 2]
     * Special cases: list = [1] or list = null;
     * popList(list);
     * Return: null;
     */

    if (head == NULL)
        return NULL;
    if (head -> next != NULL){
        LinkedList* iter = head;
        while (iter -> next -> next != NULL)
            iter = iter -> next;
        LinkedList* tail = iter -> next -> next;
        free(tail);
        iter -> next = NULL;
        return head;
    }
    else{
        free(head);
        return NULL;
    }
    // Time Complexity: O(n) - Linear Time.
}


LinkedList* delHeadList(LinkedList* head){

    /*
     * This function dynamically removes the head node from the list.
     * For example: list = [1, 2, 3];
     * delHeadList(list);
     * Return: list = [2, 3];
     * Special cases: list = [1] or list = null;
     * delHeadList(list);
     * Return null;
     */

    if (head != NULL){
        LinkedList* iter = head;
        head = head -> next;
        free(iter);
    }
    return head;
    // Time Complexity: O(1) - Constant Time
}


LinkedList* delIndexList(LinkedList* head, unsigned int index){

    /*
     * This function dynamically removes the node according to the index.
     * For example: list = [1, 5, 2];
     * delIndexList(list, 1);
     * Return: list = [1, 2];
     * Special cases: list = [1, 2, 3];
     * delIndexList(list, 3);
     * The condition will not be met and the head will be returned.
     * Return: [1 -> 2 -> 3 -> null];
     */

    if (head != NULL){
        LinkedList* iter = head;
        int length = lengthList(head);
        if (length > index){
            for (int i = 1 ; i < index ; i++)
                iter = iter -> next;
            if (index == 0){
                LinkedList* temp = head;
                head = head -> next;
                free(temp);
            }
            else{
                LinkedList* temp = iter -> next;
                iter -> next = iter -> next -> next;
                free(temp);
            } 
        }
    }
    return head;
    // Time Complexity: O(n) - Linear Time.
}


LinkedList* delDataList(LinkedList* head, int data){

    /*
     * This function removes nodes from the list according to the data.
     * For example: list = [1, 2, 3];
     * delDataList(list, 1);
     * Return: list = [2, 3];
     * Special case: list = [1, 1, 1];
     * delDataList(list, 1);
     * Return: null;
     */

    if (head != NULL){
        LinkedList* iter = head;
        while (iter -> next != NULL)
        {
            if (iter -> next -> data == data){
                LinkedList* temp = iter -> next;
                iter -> next = iter -> next -> next;
                free(temp);
            }
            else
                iter = iter -> next;
        }
        if (head -> data == data){
            LinkedList* temp = head;
            head = head -> next;
            free(temp);
        }
    }
    return head;
    // Time Complexity: O(n) - Linear Time.
}


LinkedList* sortToMaxList(LinkedList* head){

    /*
     * This function is used to sort the datas in the range in ascending order.
     * It just changes the data.
     * For example: list = [2 -> 3 -> 1 -> 4 -> 5];
     * sortToMaxList(list);
     * Return: [1 -> 2 -> 3 -> 4 -> 5 -> null];
     */

    if (head != NULL){
        LinkedList* iter = head;
        int length = lengthList(head);
        for (int i = 0 ; i < length ; i++){
            iter = head;
            for (int j = 1 ; j < length - i ; j++){
                if (iter -> data > iter -> next -> data){
                    int temp = iter -> data;
                    iter -> data = iter -> next -> data;
                    iter -> next -> data = temp;
                }   
                iter = iter -> next;
            }
        }
    }
    return head;
    // Time Complexity: O(n^2) - Quadratic Time.
}


LinkedList* sortToMinList(LinkedList* head){

    /*
     * This function is used to sort the datas in the range in descending order.
     * This can also be done with the reverse function after performing the sortToMax function.
     * For example: list = [2 -> 3 -> 1 -> 4 -> 5];
     * sortToMaxList(list);
     * Return: list = [1 -> 2 -> 3 -> 4 -> 5 -> null];
     * reverseList(list);
     * Return: [null <- 1 <- 2 <- 3 <- 4 <- 5] or [5 -> 4 -> 3 -> 2 -> 1 -> null];
     */

    if (head != NULL){
        LinkedList* iter = head;
        int length = lengthList(head);
        for (int i = 0 ; i < length ; i++){
            iter = head;
            for (int j = 1 ; j < length - i ; j++){
                if (iter -> data < iter -> next -> data){
                    int temp = iter -> data;
                    iter -> data = iter -> next -> data;
                    iter -> next -> data = temp;
                }   
                iter = iter -> next;
            }
        }
    }
    return head;
    // Time Complexity: O(n^2) - Quadratic Time.
}


LinkedList* mergeList(LinkedList* l1, LinkedList* l2){

    /*
     * This function merges two lists and returns one list.
     * For example: list1 = [1, 2, 3]; list2 = [4, 5, 6];
     * mergeList(list1, list2);
     * Return: [1 -> 2 -> 3 -> 4 -> 5 -> 6 -> null];
     * Special case 1: list1 = [1, 2, 3]; list2 = null;
     * Return: list1, so [1 -> 2 -> 3 -> null];
     * Special case 2: list1 = null; list2 = [1, 2, 3];
     * Return: list2, so [1 -> 2 -> 3 -> null];
     */

    if (l1 != NULL){
        LinkedList* iter = l1;
        while (iter -> next != NULL)
            iter = iter -> next;
        iter -> next = l2;
        return l1;        
    }
    else
        return l2;
    // Time Complexity: O(n) - Linear Time.
}


LinkedList* convertToCircularList(LinkedList* head){

    /*
     * This function converts a single linked list to a circular linked list.
     * For example: list = [1 -> 2 -> 3 -> null];
     * convertToCircularList(list);
     * Return: [1 -> 2 -> 3 -> head(1)];
     */

    if (head != NULL){
        if (hasCycle(head) == 0){
            LinkedList* iter = head;
            while (iter -> next != NULL)
                iter = iter -> next;
            iter -> next = head; 
        }
    }
    return head; 
    // Time Complexity: O(n) - Linear Time.  
}


LinkedList* convertToSingleList(LinkedList* head){

    /*
     * This function converts a circular linked list to a single linked list.
     * For example: list = [1 -> 2 -> 3 -> head(1)];
     * convertToSinglelinkList(list);
     * Return: [1 -> 2 -> 3 -> null];
     */

    if (head != NULL){
        if (hasCycle(head) == 1){
            LinkedList* iter = head -> next;
            while (iter -> next != head)
                iter = iter -> next;
            iter -> next = NULL;
        }
    }
    return head;
    // Time Complexity: O(n) - Linear Time.
}


LinkedList* uniqueList(LinkedList* head){

    /*
     * This function saves one of the identical data and deletes the others.
     * For example: list = [2, 3, 2, 4];
     * uniqueList(list);
     * Return: [2 -> 3 -> 4 -> null];
     * For example 2: list = [2, 2, 2];
     * uniqueList(list);
     * Return: [2 -> null];
     */

    if (head != NULL){
        LinkedList* iter = head;
        while (iter != NULL){
            LinkedList* temp = iter;
            while (temp -> next != NULL){
                if (temp -> next -> data == iter -> data){
                    LinkedList* temp2 = temp -> next;
                    temp -> next = temp -> next -> next;
                    free(temp2);
                }
                else
                    temp = temp -> next;
            }
            iter = iter -> next;
        }
    }
    return head;
    // Time Complexity: O(n^2) - Quadratic Time.
}


LinkedList* clearList(LinkedList* head){

    /*
     * This function dynamically deletes all nodes in the list and returns null.
     * For example: list = [1, 2, 3]
     * clearList(list);
     * Return: null;
     */

    LinkedList* iter = head;
    if (iter == NULL){
        return NULL;
    }
    else if (iter -> next == NULL){
        free(head);
        return NULL;
    }
    else{
        LinkedList* temp = NULL;
        while (iter != NULL)
        {
            temp = iter -> next;
            free(iter);
            iter = temp;
        }
        head = NULL;
        return head;
    }
    // Time Complexity: O(n) - Linear Time.
}


bool hasCycle(LinkedList* head){

    /*
     * This function returns true or false values depending on whether there is a cycle in the list.
     * true returns if there is a cycle.
     * Otherwise returns false.
     * For example: list = [1 -> 2 -> 3 -> head];
     * Return: true;
     * For example 2: list = [1 -> 2 -> 3 -> second node(2)];
     * Return: true;
     * For example 3: list = [1 -> 2 -> 3 -> null];
     * Return: false;
     */

    if (head != NULL){
        LinkedList* slowPtr, *fastPtr;
        slowPtr = fastPtr = head;
        while (slowPtr != NULL && fastPtr != NULL && fastPtr -> next != NULL)
        {
            slowPtr = slowPtr -> next;
            fastPtr = fastPtr -> next -> next;
            if ( slowPtr == fastPtr )
                return 1;
        }
        return 0;
    }
    else
        exit(0);
    // Time Complexity: O(n) - Linear Time.
}


void printList(LinkedList* head){

    /*
     * This function prints the data of the nodes.
     * Applies to both single linked list and circular linked list.
     * If the list is empty, tell the user "This List Is Empty!" the text will be displayed.
     */

    if (head != NULL){
        if (hasCycle(head) == 0){
            while(head != NULL){
                printf("%d ", head -> data);
                head = head -> next;
            }
        }
        else{
            LinkedList* iter = head;
            printf("%d ", iter -> data);
            iter = iter -> next;
            while (iter != head)
            {
                printf("%d ", iter -> data);
                iter = iter -> next;
            }
            
        }
        printf("\n");
    }
    else
        printf("This List Is Empty!\n");
    // Time Complexity: O(n) - Linear Time.
}


void printAddressList(LinkedList* head){

    /*
     * This function prints the address of the nodes.
     * Applies to both single linked list and circular linked list.
     * If the list is empty, tell the user "This List Is Empty!" the text will be displayed.
     */

    if (head != NULL){
        if ( hasCycle(head) == 0 ){
            while (head != NULL)
            {
                printf("%p\n", head);
                head = head -> next;
            }
        }
        else{
            LinkedList* iter = head;
            printf("%p\n", iter);
            iter = iter -> next;
            while (iter != head)
            {
                printf("%p\n", iter);
                iter = iter -> next;
            }
        }
    }
    else
        printf("This List Is Empty!\n");
    // Time Complexity: O(n) - Linear Time.
}


bool isEmptyList(LinkedList* head){

    /*
     * This function returns true if the list is empty, otherwise false.
     */

    return head == NULL;
    // Time Complexity: O(1) - Constant Time
}


int maxList(LinkedList* head){
    if (head != NULL){
        int max = 0;
        LinkedList* iter = head -> next;
        max = head -> data;
        while (iter != NULL)
        {
            if (iter -> data > max)
                max = iter -> data;
            iter = iter -> next;
        }
        return max;
    }
    else{
        printf("This List Is Empty!\n");
        exit(0);
    }
    // Time Complexity: O(n) - Linear Time.
}


int minList(LinkedList* head){
    if (head != NULL){
        int min = 0;
        LinkedList* iter = head -> next;
        min = head -> data;
        while (iter != NULL)
        {
            if (min > iter -> data)
                min = iter -> data;
            iter = iter -> next;
        }
        return min;
    }
    else{
        printf("This List Is Empty!\n");
        exit(0);
    }
    // Time Complexity: O(n) - Linear Time.
}


int lengthList(LinkedList* head){
    int length = 0;
    if (head != NULL){
        LinkedList* iter = head;
        while (iter != NULL)
        {
            length++;
            iter = iter -> next;
        } 
    }
    return length;
    // Time Complexity: O(n) - Linear Time.
}


int sumList(LinkedList* head){
    int sum = 0;
    if (head != NULL){
        LinkedList* iter = head;
        while (iter != NULL)
        {
            sum += iter -> data;
            iter = iter -> next;
        }
        return sum;
    }
    else
        exit(0);
    // Time Complexity: O(n) - Linear Time.
}


double avgList(LinkedList* head){
    long int length = 0, sum = 0;
    if (head != NULL){
        LinkedList* iter = head;
        while (iter != NULL)
        {
            length++;
            iter = iter -> next;
        }
        if (length == 0)
            exit(0);
        iter = head;
        for (long int i = 0 ; i < length ; i++){
            sum += iter -> data;
            iter = iter -> next;
        }
    }
    return (double) sum / length;
    // Time Complexity: O(n) - Linear Time.
}

int atList(LinkedList* head, int index){
    if (head != NULL){
        LinkedList* iter = head;
        for (int i = 0 ; i < index && iter != NULL; i++)
            iter = iter -> next;
        if (iter != NULL)
            return iter -> data;
        else
            exit(0);
    }
    else
        exit(0);
}