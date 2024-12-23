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
    int minimumOperations(TreeNode* root) {
        int ans =0 ; 
        queue<TreeNode*> q; 
        q.push(root);
        while(!q.empty())
        {
            int n = q.size(); 
            map<int,int>mp,mp2;
            vector<int>v; 
            int x =0 ; 
            for (int i=0;i<n;i++)
            {
                auto node=  q.front(); 
                q.pop(); 
                mp[node->val]  =x;
                mp2[x] = node->val; 
                v.push_back(node->val); 
                x++; 
                if (node->left)
                  q.push(node->left); 
                if (node->right)
                    q.push(node->right); 
            }
            sort(v.begin() , v.end()); 
            for (int i=0;i<n;i++)
            {
                if (mp[v[i]]!=i)
                {
                    int ind1 = mp[v[i]]; 
                    int val = mp2[i]; 
                    mp[val] = ind1; 
                    mp[v[i]]=i; 
                    mp2[i]= v[i];
                    mp2[ind1]=val; 
                    ans++; 
                }
            }
        }
        
        return ans; 
    }
};