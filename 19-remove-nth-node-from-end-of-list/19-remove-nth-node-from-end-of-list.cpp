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
        
        // 2 kadam piche se delete kerna h toh kisiko 2 kadam aage bhj ke pata krlo kitna piche 
        // rukna hai aur delete kerne k liye toh 1 kadam phele k node ka pointer badalna padta h
        // toh 1 kadam phlele se shuru kr do...ie dummy node.
        
        ListNode* dummy=new ListNode();
        dummy->next=head;
        ListNode* fast=dummy;
        ListNode* slow=dummy;
        
        for(int i=1; i<=n; i++){
            fast=fast->next;
        }
        
        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        slow->next=slow->next->next;
        return dummy->next;
    }
};