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
    TreeNode* reverseOddLevels(TreeNode* root) {
       int level =0; 
       queue<TreeNode*> q; 
        q.push(root); 
        while(!q.empty())
        {
            int n = q.size(); 
            vector<TreeNode*>v;
            for (int i=0;i<n;i++)
            {
                auto top = q.front(); 
                q.pop(); 
                v.push_back(top); 
                if (top->left)
                    q.push(top->left); 
                if (top->right)
                    q.push(top->right); 
            }
            if (level%2)
            {
                for(int l=0 , r = v.size()-1;l<r;l++,r--)
                {
                    int x = v[l]->val; 
                    v[l]->val = v[r]->val; 
                    v[r]->val = x ; 
                }
            }
            level++; 
        }
        return root; 
    }
};