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
    int ans =0; 
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int>fre(10); 
        solve(root , fre); 
        return ans; 
    }
    void  solve(TreeNode* root , vector<int>fre)
    {
        if (root==NULL)
            return;
        fre[root->val]++; 
        if (!root->left&&!root->right)
        {
            int odd =0; 
            for (auto i: fre)
            {
                odd+=i%2; 
            }
            if (odd<=1)
                ans++; 
        }
        solve(root->left , fre); 
        solve(root->right,fre); 
    }
};