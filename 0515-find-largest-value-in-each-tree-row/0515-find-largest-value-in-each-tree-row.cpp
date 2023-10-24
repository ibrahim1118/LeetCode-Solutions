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
    vector<int> largestValues(TreeNode* root) {
        if (root==NULL)
            return {}; 
        queue<TreeNode*>q; 
        q.push(root); 
        vector<int>ans; 
        while(!q.empty())
        {
            long long a =-3e9; 
            int s  =q.size(); 
            for (int i=0;i<s;i++)
            {
                TreeNode* top = q.front(); 
                q.pop(); 
                long long b = top->val; 
                a = max(b , a); 
                if (top->left!=NULL)
                  q.push(top->left); 
                if (top->right!=NULL)
                     q.push(top->right); 
            }
            ans.push_back(a); 
        }
        return ans; 
    }
};