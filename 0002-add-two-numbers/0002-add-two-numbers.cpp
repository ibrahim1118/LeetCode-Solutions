class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       int r =0; 
       vector<int>ans; 
       ListNode *dummy = new ListNode(0);
      ListNode *curr = dummy;
       ListNode* te1 =l1 ;
       ListNode* te2 = l2;
       while(te1||te2||r)
       {
           if (te1)
           {
               r+=te1->val ; 
               te1 = te1->next; 
           }
           if (te2)
           {
               r+=te2->val ; 
               te2 = te2->next; 
           }
           ans.push_back(r%10); 
           ListNode *node = new ListNode(r % 10);
            curr->next = node;
            curr = curr->next;
           r/=10;
       } 
       for (auto i : ans)
       cout<<i<<" "; 
       return dummy->next; 

    }
};