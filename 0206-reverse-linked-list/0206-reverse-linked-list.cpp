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
    ListNode* reverseList(ListNode* head) {
      // vector<int>arr;
      //   int i=0;
      //   ListNode*p=head;
      //   while(p!=NULL)
      //   {
      //       arr[i]=p->val;
      //       p=p->next;
      //       i++;
      //   }
      //   p=head;
      //   i--;
      //   while(p!=NULL)
      //   {
      //       p->val=arr[i];
      //       p=p->next;
      //       i--;
      //   }
      //   return head;
        ListNode* p,*q, *r;
        //sliding
        p=head;
        q=NULL;
        r=NULL;
        while(p!=NULL)
        {
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        head=q;
        
        return head;
    }
};