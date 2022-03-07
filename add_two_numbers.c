//  https://www.youtube.com/watch?v=s7TMS0hXLr8&t=1202s
//  https://leetcode.com/problems/add-two-numbers/

#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list.

struct ListNode {
    int val;
    struct ListNode* next;
};

typedef struct ListNode ListNode;

ListNode* pushList(ListNode* head, int new_val){
    if ( head != NULL ){
        ListNode* iter = head;
        while ( iter -> next != NULL )
        {
            iter = iter -> next;
        }
        iter -> next = (ListNode* ) malloc(sizeof(ListNode));
        iter -> next -> val = new_val;
        iter -> next -> next = NULL;
        
    }
    else{
        head = (ListNode* ) malloc(sizeof(ListNode));
        head -> val = new_val;
        head -> next = NULL;
    }
    return head;
}

void print(ListNode* head){
    if ( head != NULL ){
        ListNode* iter = head;
        while ( iter != NULL )
        {
            printf("%d ", iter -> val);
            iter = iter -> next;
        }
        printf("\n");
    }
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
    int length1 = 0, length2 = 0;
    ListNode* iter1 = l1;
    ListNode* iter2 = l2;
    while ( iter1 != NULL )
    {
        length1++;
        iter1 = iter1 -> next;
    }
    while ( iter2 != NULL )
    {
        length2++;
        iter2 = iter2 -> next;
    }
    iter1 = l1;
    iter2 = l2;
    int sum = 0, remainder = 0;
    ListNode* l3 = NULL;
    l3 = (ListNode* ) malloc(sizeof(ListNode));
    sum = iter1 -> val + iter2 -> val;
    remainder = sum / 10;
    l3 -> val = sum % 10;
    l3 -> next = NULL;
    iter1 = iter1 -> next;
    iter2 = iter2 -> next;
    ListNode* iter3 = l3;
    if ( length1 > length2 ){
        for ( int i = 1 ; i < length1 ; i++ ){
            if ( iter2 != NULL ){
                iter3 -> next = (ListNode* ) malloc(sizeof(ListNode));
                sum = iter1 -> val + iter2 -> val + remainder;
                remainder = sum / 10;
                iter3 = iter3 -> next;
                iter3 -> val = sum % 10;
                iter3 -> next = NULL;
                iter1 = iter1 -> next;
                iter2 = iter2 -> next;
            }
            else{
                iter3 -> next = (ListNode* ) malloc(sizeof(ListNode));
                sum = iter1 -> val + remainder;
                remainder = sum / 10;
                iter3 = iter3 -> next;
                iter3 -> val = sum % 10;
                iter3 -> next = NULL;
                iter1 = iter1 -> next;
            }
        }
        if ( remainder != 0 ){
            iter3 -> next = (ListNode* ) malloc(sizeof(ListNode));
            iter3 = iter3 -> next;
            iter3 -> val = remainder;
            iter3 -> next = NULL;
        }
    }
    else{
        for ( int i = 1 ; i < length2 ; i++ ){
            if ( iter1 != NULL ){
                iter3 -> next = (ListNode* ) malloc(sizeof(ListNode));
                sum = iter1 -> val + iter2 -> val + remainder;
                remainder = sum / 10;
                iter3 = iter3 -> next;
                iter3 -> val = sum % 10;
                iter3 -> next = NULL;
                iter1 = iter1 -> next;
                iter2 = iter2 -> next;
            }
            else{
                iter3 -> next = (ListNode* ) malloc(sizeof(ListNode));
                sum = iter2 -> val + remainder;
                remainder = sum / 10;
                iter3 = iter3 -> next;
                iter3 -> val = sum % 10;
                iter3 -> next = NULL;
                iter2 = iter2 -> next;
            }
        }
        if ( remainder != 0 ){
            iter3 -> next = (ListNode* ) malloc(sizeof(ListNode));
            iter3 = iter3 -> next;
            iter3 -> val = remainder;
            iter3 -> next = NULL;
        }
    }
    return l3;
    // Time Complexity: O(n) - Linear Time
}

int main(int argc, char** argv){
    ListNode* list1 = NULL;
    for ( int i = 0 ; i < 5 ; i++ ){
        int new_val;
        scanf("%d", &new_val);
        list1 = pushList(list1, new_val);
    }
    ListNode* list2 = NULL;
    for ( int i = 0 ; i < 4 ; i++ ){
        int new_val;
        scanf("%d", &new_val);
        list2 = pushList(list2, new_val);
    }
    ListNode* list3 = addTwoNumbers(list1, list2);
    print(list3);
    // 9 9 9 9 9
    // 1 2 3 4
    // 0 2 3 4 0 1
}
