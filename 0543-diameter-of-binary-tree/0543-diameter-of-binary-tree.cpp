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
    int diameterOfBinaryTree(TreeNode* root) {
        solve(root , ans); 
        return ans; 
    }
    int solve(TreeNode* root, int& diameter) {
        if (root == NULL) return 0;                         
        int left = solve(root->left, diameter);             
        int right = solve(root->right, diameter);          
        diameter = max(diameter, left + right);          // 
        return max(left, right) + 1;                    // 
    }
};