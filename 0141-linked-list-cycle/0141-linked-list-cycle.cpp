/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

////One easy methos is to modify the values of the linked list to tha value which is not in the range.
//When you encounter this value again then there is loop

class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        if(head==NULL) return false;
        
        while(head!=NULL)
        {
            if(head->val==1000000)
                return true;
             head->val=1000000;
            head=head->next;
        }
        return false;
    }
};