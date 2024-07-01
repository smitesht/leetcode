#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}    
};

class LinkedList
{
private:
    ListNode *m_pHead;

public:
    LinkedList():m_pHead(){}

    void insert(int val) {

        if (m_pHead == nullptr) {

            m_pHead = new ListNode(val);
        }
        else
        {
            ListNode* pTemp = m_pHead;

            while (pTemp->next != nullptr) {
                pTemp = pTemp->next;
            }

            pTemp->next = new ListNode(val);
        }

    }

    ListNode* getHead() {
        return m_pHead;
    }
    
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* curr = head;
        ListNode* p = dummy;

        for(int ind=1; ind < left; ind++)
        {
            p = p->next;
            curr = curr->next;            
        }

        ListNode* prev = nullptr;
        ListNode* l1 = curr;

        for(int ind = left; ind <= right; ind++)
        {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;           
        }

        p->next = prev;
        l1->next = curr;

        return dummy->next;       

    }

};

int main()
{
    LinkedList l1;
    l1.insert(1);
    l1.insert(2);
    l1.insert(3);
    l1.insert(4);
    l1.insert(5);
    
    ListNode *p = l1.reverseBetween(l1.getHead(),2,4);
}