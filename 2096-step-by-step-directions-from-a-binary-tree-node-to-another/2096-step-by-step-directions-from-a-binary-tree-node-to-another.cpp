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
    string getDirections(TreeNode* root, int startValue, int destValue)     {
        string pathTos , pathToEnd ; 
        getPath(root , startValue , pathTos); 
        getPath(root , destValue ,pathToEnd); 
        int i =0 ; 
        while(i<pathTos.size()&&i<pathToEnd.size()&&pathTos[i]==pathToEnd[i])
        {
            i++; 
        }
        string ans =""; 
        int j =i ; 
        while(j<pathTos.size()){
            ans+='U'; 
            j++; 
        }
        while(i<pathToEnd.size())
        {
            ans+=pathToEnd[i];
            i++; 
        } 
        return ans; 
    }
    bool getPath(TreeNode* root, int value, string& path) {
        if (!root) return false;
        if (root->val == value) return true;
        path.push_back('L');
        if (getPath(root->left, value, path)) return true;
        path.pop_back();
        path.push_back('R');
        if (getPath(root->right, value, path)) return true;
        path.pop_back();
        return false;
    }
};