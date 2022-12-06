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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL) return NULL;
        ListNode* first = new ListNode();
        ListNode* second = new ListNode();
        first=head;
        second=head->next;
        ListNode *s;
       
        s=second;
         while(second!=NULL && second->next!=NULL)
         {
             first->next=second->next;
             first=first->next;
             second->next=first->next;
             second=second->next;    
         }
        first->next=s;
        return head;
    }
};