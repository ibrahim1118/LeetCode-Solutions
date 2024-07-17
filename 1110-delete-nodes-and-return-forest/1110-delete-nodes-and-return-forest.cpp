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
    vector<TreeNode*>ans; 
    vector<int>d; 
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
         d.resize(10001); 
        for (auto i: to_delete)
              d[i]++; 
        solve(root); 
        if (!d[root->val])
            ans.push_back(root); 
        return ans;
        
    }
    TreeNode* solve(TreeNode* root)
    {
        if(!root)   
            return NULL;

        root -> left = solve(root -> left);
        root -> right = solve(root -> right);

        
        if(d[root -> val])
        {  
            
            if(root -> left)
                ans.push_back(root -> left);
            if(root -> right)
                ans.push_back(root -> right);
            
            return NULL;
        }

        return root;
    }
};