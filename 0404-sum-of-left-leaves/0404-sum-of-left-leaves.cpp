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
    int sumOfLeftLeaves(TreeNode* root) {
      return solve(root , 2);    
    }
    int solve(TreeNode* root , int b)
    {
        if (root ==NULL)
            return 0; 
        if (!root->left&&!root->right&&b==1)
               return root->val; 
        if (!root->left&&!root->right)
              return 0;
        
        return solve(root->left , 1)+solve(root->right,2); 
    
    }
};