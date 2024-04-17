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
    string ans =""; 
    string smallestFromLeaf(TreeNode* root) {
        solve(root , ""); 
        return ans; 
    }
    void solve(TreeNode* root , string a)
    {
        a=char ('a'+root->val)+a; 
        if (!root->left&&!root->right)
        {
            if (ans=="")
                ans = a; 
            else 
                ans = min(ans ,a); 
            return; 
                
        }
        if (root->left)
            solve(root->left , a); 
        if (root->right)
            solve(root->right , a); 
    }
};