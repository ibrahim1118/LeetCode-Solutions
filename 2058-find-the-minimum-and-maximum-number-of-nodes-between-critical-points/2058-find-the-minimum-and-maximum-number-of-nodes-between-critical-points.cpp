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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int pre = head->val;
        head = head->next; 
        vector<int>inds ; 
        int ind =1 ; 
        while(head->next!=NULL)
        {
            if ((head->val>pre&&head->val>head->next->val)||(head->val<pre&&head->val<head->next->val))
            {
                inds.push_back(ind); 
            }
            ind++; 
            pre = head->val; 
            head = head->next; 
        }
        if (inds.size()<=1)
            return {-1, -1}; 
        int ma =1e9 ; 
        for (int i=1;i<inds.size();i++)
        {
            ma = min(ma , inds[i]-inds[i-1]); 
        }
        return {ma , inds[inds.size()-1] - inds[0]}; 
    }
};