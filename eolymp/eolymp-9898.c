int sum(ListNode *head)
{
    struct ListNode* iter = head;
    int sum = 0;
    while ( iter != NULL )
    {
        sum += iter -> val;
        iter = iter -> next;
    }
    return sum;
}
