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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int>A;
        ListNode* temp=head;
        int n=0;
        while(temp){
            n++;
            A.push_back(temp->val);
            temp=temp->next;
        }
        while(left<right){
            swap(A[left-1],A[right-1]);
            left++;
            right--;
        }
        temp=head;
        int i=0;
        while(temp){
            temp->val=A[i];
            temp=temp->next;
            i++;
        }
        return head;
    }
};