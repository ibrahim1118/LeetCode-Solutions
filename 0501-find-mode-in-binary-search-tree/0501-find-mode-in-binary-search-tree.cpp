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
    map<int,int>mp; 
    int ma =0; 
    vector<int> findMode(TreeNode* root) {
         if (root==NULL)
             return {}; 
        solve(root);
        vector<int>ans; 
        for (auto i : mp)
        {
            if (i.second==ma)
                ans.push_back(i.first); 
         }
        return ans; 
    }
    void solve(TreeNode* root)
    {
        mp[root->val]++;
        ma = max(ma , mp[root->val]); 
        if (root->left!=NULL)
            solve(root->left); 
        if (root->right!=NULL)
            solve(root->right); 
            
    }
};