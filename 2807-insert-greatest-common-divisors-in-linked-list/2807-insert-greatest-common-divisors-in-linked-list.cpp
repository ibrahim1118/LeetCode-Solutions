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
        ListNode* curr = head; 
        while(curr->next)
        {
            int a = gcd(curr->val , curr->next->val);
            ListNode* node = new ListNode(a); 
            node->next = curr->next; 
            curr->next=node; 
            curr= curr->next->next; 
        }
        return head; 
    }
    int gcd(int a, int b) {
    if (b == 0) return a;
    return (a % b) ? gcd(b, a % b) : b;
     }
};