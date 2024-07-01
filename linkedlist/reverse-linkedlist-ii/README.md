


```cpp
ListNode* reverseBetween(ListNode* head, int left, int right) {

    // create dummy node to hold the pointer    
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* curr = head;
    ListNode* p = dummy;

    // iterate till left and store the prev and curr addresses
    for(int ind=1; ind < left; ind++)
    {
        p = p->next;
        curr = curr->next;            
    }

    ListNode* prev = nullptr;
    ListNode* l1 = curr;
    // iterate till right, and perform reverse operations
    for(int ind = left; ind <= right; ind++)
    {
        ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;           
    }
    // curretly p pointing to the before of the left,
    // then p->next to head of the reverse list 
    p->next = prev;
    // last node of the reverse to next after right 
    l1->next = curr;
    
    return dummy->next;       

}
```
