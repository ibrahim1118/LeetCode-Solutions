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
    map<int,vector<int>>adj; 
    int amountOfTime(TreeNode* root, int start) {
        int ans =0; 
        solve(root); 
        stack<pair<int,int>>st; 
        st.push({start, 0}); 
        vector<int>vis(100006); 
        while(!st.empty())
        {
            int n =st.size(); 
            for (int i=0;i<n;i++)
            {
                auto top  = st.top(); 
                ans = max(ans , top.second); 
                st.pop(); 
                vis[top.first]=1; 
                    for (auto  j : adj[top.first])
                        if (!vis[j])
                         st.push({j , top.second+1}); 
                
            }
        }
        return ans; 
    }
    void  solve(TreeNode* root)
    {
        if (root==NULL)
            return; 
        if (root->right!=NULL)
        {
            adj[root->val].push_back(root->right->val); 
            adj[root->right->val].push_back(root->val);
        }
        if (root->left!=NULL)
        {
            adj[root->val].push_back(root->left->val); 
            adj[root->left->val].push_back(root->val);
        }
        solve(root->left); 
        solve(root->right); 
    }
};