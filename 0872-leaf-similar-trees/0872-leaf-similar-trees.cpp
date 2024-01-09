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
    vector<int>v; 
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
      solve(root1); 
      vector<int>v1 = v; 
      v.clear(); 
      solve(root2); 
      if (v.size()!=v1.size())
          return false;
      for (int i =0;i<v.size();i++)
      {
          if (v[i]!=v1[i])
              return false; 
      }
       return true; 
    }
    void solve(TreeNode* root)
    {
        if (root==NULL)
            return; 
        if (root->left==NULL&&root->right==NULL)
        {
            v.push_back(root->val); 
        }
        solve(root->left); 
        solve(root->right); 
    }
};