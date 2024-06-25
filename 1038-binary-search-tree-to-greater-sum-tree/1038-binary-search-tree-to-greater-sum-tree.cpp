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

    int sum = 0;
    TreeNode* bstToGst(TreeNode* root) {
        getsum(root);
        solve(root,0);
        return root;
    }

    void getsum(TreeNode* root){
        if(root == nullptr)return;
        getsum(root->left);
        sum += root->val;
        getsum(root->right);
    }

    int solve(TreeNode* root, int give){
        if(root == nullptr)return 0;
        int left = solve(root->left,give);
        int right = solve(root->right,give+root->val+left);
        int ret = root->val + left + right;
        root->val = sum - left - give;
        return ret;
    }
};