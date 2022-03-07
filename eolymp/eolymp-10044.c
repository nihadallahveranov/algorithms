ListNode* merge(ListNode *l1, ListNode *l2)
{
    if ( l1 != NULL ){
        int size = 0;
        ListNode* iter = l1;
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
                if ( iter -> val > iter -> next -> val ){
                    int temp = iter -> next -> val;
                    iter -> next -> val = iter -> val;
                    iter -> val = temp;
                }
                iter = iter -> next;
            }
        }
        return l1;
    }
    else{
        ListNode* iter = l2;
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
                if ( iter -> val > iter -> next -> val ){
                    int temp = iter -> next -> val;
                    iter -> next -> val = iter -> val;
                    iter -> val = temp;
                }
                iter = iter -> next;
            }
        }
        return l2;
    }
}
