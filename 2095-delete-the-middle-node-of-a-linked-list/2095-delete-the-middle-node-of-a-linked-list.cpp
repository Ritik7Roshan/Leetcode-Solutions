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
    ListNode* deleteMiddle(ListNode* head) {
        // jab v LinkedList mai middle element nikalna ho to use           fast and slow pointers concept 
        
       ListNode* fast=head;
        ListNode* slow=head;
        ListNode* prev=NULL;
        if(head==NULL)
        {
            return NULL;
        }
        // If there is only one node, it is only middle one delete it
        if(head->next==NULL) 
        {
            delete head;
            return NULL;
        }
        while(fast!=NULL && fast->next!=NULL)
        {
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
            // Fast Slow ke iss mov se fast last node pr hoga aur slow mid node pr toh uss time prev slow ke just piche hoga as usual => prev->next=slow->next;
        }
        prev->next=slow->next; 
        delete slow;
        return head;
    }
};