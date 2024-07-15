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
    TreeNode* createBinaryTree(vector<vector<int>>& d) {

        unordered_map<int, TreeNode*> mp;
        set<int>st;
        for(auto i : d){

            int p = i[0];
            int c = i[1];
            int left = i[2];

            if(mp.find(p) == mp.end()){
                mp[p] = new TreeNode(p);
            }

            if(mp.find(c) == mp.end()){
                mp[c] = new TreeNode(c);
            }

            if(left == 1){
                mp[p]->left = mp[c];
            }else{
                mp[p]->right = mp[c];
            }
            st.insert(c); 
        }   
        for (auto i : d)
        {
            if (!st.count(i[0]))
               return mp[i[0]]; 
        }
        TreeNode* ans = mp[d[0][1]]; 
        return ans; 

       
        
    }
};