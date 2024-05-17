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
    int t ; 
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        t = target; 
        solve(root); 
        return root; 
    }
    void solve(TreeNode* &root)
    {
        if (root->val==t&&!root->left&&!root->right)
        {
            root = NULL; 
            return; 
        }
        if (root->left)
            solve(root->left); 
        if (root->right)
            solve(root->right); 
        if (root->val==t&&!root->left&&!root->right)
        {
            root = NULL; 
        }
    }
};