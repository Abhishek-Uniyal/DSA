/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *i=head;
        int count=0;
        if(i==NULL)
            return i;
        if(i->next==NULL && n==1)
            return NULL;
        while(i!=NULL)
        {
            count++;
            i=i->next;
        }
        i=head;
        if(count==n)
        {
            return i->next;
        }
        
        int k=1;
        while(k<count-n)
        {
            i=i->next;
            k++;
        }
        
        i->next=i->next->next;
        
        return head;
        
    }
};