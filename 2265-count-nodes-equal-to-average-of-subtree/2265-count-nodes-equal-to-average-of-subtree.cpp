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
    int sum =0 , number =0; 
    int ans =0; 
    int averageOfSubtree(TreeNode* root) {
        if (root)
        {   
            number=0 , sum=0; 
            int a = root->val; 
            solve(root);
            if (sum/number==a)
              ans++; 
            averageOfSubtree(root->right); 
            averageOfSubtree(root->left);
        }
    return ans; 
         
        
    }
    void  solve(TreeNode* root)
    {
        sum+=root->val; 
        number++;
        if (root->left)
            solve(root->left); 
        if (root->right)
            solve(root->right);
    }
     
};