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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
        ListNode* ans = new ListNode();
        ans->next = list1;
        
        ListNode* prevA = ans;
        for (int i = 0; i < a; ++i) {
            prevA = prevA->next;
        }
        
        ListNode* prevB = prevA;
        for (int i = a; i <= b + 1; ++i) {
            prevB = prevB->next;
        }
        
        ListNode* list2end = list2;
        while (list2end->next != nullptr) {
            list2end = list2end->next;
        }
        
        prevA->next = list2;
        list2end->next = prevB;
        
        return ans->next;
    }
};