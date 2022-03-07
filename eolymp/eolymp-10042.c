int hasCycle(ListNode *head)
{
    ListNode* slowPtr, *fastPtr;
    slowPtr = fastPtr = head;
    while ( slowPtr && fastPtr && fastPtr -> next )
    {
        slowPtr = slowPtr -> next;
        fastPtr = fastPtr -> next -> next;
        if ( slowPtr == fastPtr )
            return 1;
    }
    return 0;
}
