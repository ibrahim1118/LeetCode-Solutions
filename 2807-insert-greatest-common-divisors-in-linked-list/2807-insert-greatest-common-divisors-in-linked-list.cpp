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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (head==NULL)
             return head; 
        ListNode* curr = head->next;    
        ListNode* p = head;
        while(curr !=NULL)
        {
            int g = gcd(curr->val , p->val); 
            ListNode* node =   new ListNode(g);
            p->next = node; 
            node->next = curr; 
            p = curr ; 
            curr = curr->next; 
        }
        return head; 
    }
    int gcd(int x, int  y) {
    if (x == 0) return y;
    return gcd(y % x, x);
}
};