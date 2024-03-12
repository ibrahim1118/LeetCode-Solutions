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
    ListNode* removeZeroSumSublists(ListNode* head) {
       int sum =0; 
       ListNode* curr = new ListNode(0) ;
       curr->next= head;
       map<int , ListNode*> mp; 
       for (ListNode* node = curr ; node;node = node->next)
       {
           sum+=node->val; 
           mp[sum] = node;     
       }
      sum =0; 
       for (ListNode* node = curr ; node;node = node->next)
       {
           sum+=node->val; 
           node->next=mp[sum]->next; 
       }
    return curr->next; 
    }
};