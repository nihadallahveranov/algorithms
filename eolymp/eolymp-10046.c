ListNode* reverse(ListNode* head)
{
    struct ListNode* iter = head, *tmp = head;
    int n = 0;
    while ( iter != NULL )
    {
        n++;
        iter = iter -> next;
    }
    iter = head;
    for ( int i = 0 ; i < n / 2 ; i++ ){
        for ( int j = 1 ; j < n - i ; j++ )
            tmp = tmp->next;
        int temp = iter -> val;
        iter -> val = tmp -> val;
        tmp -> val = temp;
        tmp = head;
        iter = iter -> next;
    }
    iter = head;
    return iter;
}
