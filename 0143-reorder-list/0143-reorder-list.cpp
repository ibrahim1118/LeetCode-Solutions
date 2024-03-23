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
    void reorderList(ListNode* head) {
       
        if (head->next == NULL)
            return;

        ListNode* prev = NULL;
        ListNode* tempHead = head;
        ListNode* slow = head;
        ListNode* fast = head;

        
        while (fast && fast->next) {
            prev = slow;
            fast = fast->next->next;
            slow = slow->next;
        }

        prev->next = NULL;
        prev = NULL;

        
        while (slow) {
            ListNode* path = slow->next;
            slow->next = prev;
            prev = slow;
            slow = path;
        }
        
        tempHead = head;
        while (tempHead && prev) {
            ListNode* prevNext = prev->next;
            ListNode* headNext = tempHead->next;

            tempHead->next = prev;
            
            if (headNext)
                prev->next = headNext;

            prev = prevNext;
            tempHead = headNext;
        }
    }
};