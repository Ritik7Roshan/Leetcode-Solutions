/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// Using hashing 
// here we will check if the  node we have visited is present or if we have //visited it then it mean there is cycle.

class Solution {
public:
    unordered_map<ListNode*,int>mp;
    bool hasCycle(ListNode *head) {
        while(head!=NULL)
        {
            if(mp.find(head)==mp.end())
            {
                mp[head]++;
            }
            else{
                return true;
            }
            head=head->next;
        }
        return false;
    }
};
//TC O(N)
//SC O(N)