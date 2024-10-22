/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    long long kthLargestLevelSum(TreeNode* root, int k) {
       long long ans =0 ; 
       queue<TreeNode*>q ; 
       q.push(root); 
       vector<long long> v; 
        while(!q.empty())
        {
            long long sum =0 ; 
            long long  s = q.size(); 
            for (int i=0;i<s;i++)
            {
                auto x = q.front(); 
                q.pop(); 
                sum+=x->val; 
                if (x->left)
                    q.push(x->left); 
                if (x->right)
                    q.push(x->right); 
            }
            v.push_back(sum); 
        }
        sort(v.rbegin() , v.rend()); 
        if (v.size()<k)
            return -1; 
        return v[k-1]; 
        
        
    }
};