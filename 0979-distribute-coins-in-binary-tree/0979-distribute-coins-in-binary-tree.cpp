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
    int distributeCoins(TreeNode* root) {
        solve(root); 
        return ans; 
    }
    int solve(TreeNode* root)
    {
        if (root==NULL)
              return 0;
        int left = solve(root->left); 
        int right = solve(root->right); 
        ans+=abs(left)+ abs(right); 
        return root->val+left+right-1; 
        
    }
};