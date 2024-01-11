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
    int maxAncestorDiff(TreeNode* root) {
        solve(root , root->val , root->val); 
        return ans; 
    }
    void solve(TreeNode* root , int ma , int mx)
    {
        if (root==NULL)
            return; 
        mx = max(mx , root->val); 
        ma = min(ma , root->val); 
        ans = max(ans , mx - ma); 
        solve(root->left , ma , mx); 
        solve(root->right , ma , mx); 
    }
};