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
   vector<int>mp; 
    vector<int> treeQueries(TreeNode* root, vector<int>& qur) {
        vector<int>v(100005); 
        mp.resize(100005); 
        rec(root , 0 ,1); 
        vector<int>ans; 
        queue<TreeNode*>q ; 
        q.push(root); 
        int level =0 ; 
        while(!q.empty())
        {
            int s = q.size(); 
            vector<pair<int,int>>h;
            for (int i=0;i<s;i++)
            {
                auto node = q.front(); 
                q.pop(); 
                h.push_back({mp[node->val] , node->val});
                if (node->left)
                    q.push(node->left); 
                if (node->right)
                    q.push(node->right); 
            }
            sort(h.begin(),h.end());
            if (h.size()==1)
            {
                v[h[0].second]=level-1; 
            }
            else 
            {
               v[h[s-1].second] = h[s-2].first+level;  
               for (int x=0;x<h.size()-1;x++)
               {
                   v[h[x].second] = h[s-1].first+level;
               }
            }
            level++; 
        }
        for (auto i:qur )
            ans.push_back(v[i]); 
        return ans ; 
    }
    int rec(TreeNode* root  , int len , int level)
    {
        if (root==NULL)
            return len;
        int left =rec(root->left , len+1 , level+1); 
        int right = rec(root->right , len+1 , level+1); 
         mp[root->val] = max(left, right) - level; 
        return max(left , right); 
        
        
    }
};