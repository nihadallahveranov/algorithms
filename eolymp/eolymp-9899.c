int length(ListNode *head)
{
    struct ListNode* iter = head;
    int length = 0;
    while ( iter != NULL )
    {
        length++;
        iter = iter -> next;
    }
    return length;
}
