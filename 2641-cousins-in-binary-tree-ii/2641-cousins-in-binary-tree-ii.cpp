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
    TreeNode* replaceValueInTree(TreeNode* root) {
        vector<int>levelsum; 
        queue<TreeNode*> q ; 
        q.push(root); 
        while(!q.empty())
        {
            int s =q.size(); 
            int sum =0 ; 
            for (int i=0;i<s;i++)
            {
               
                auto node = q.front(); 
                q.pop(); 
                sum+=node->val; 
                if (node->left) 
                q.push(node->left);
                if (node->right)
                q.push(node->right);
            }
            levelsum.push_back(sum); 
        }
        
        int level =0 ;
        root->val= 0; 
        q.push(root); 
        while(!q.empty())
        {
            int s = q.size();
            if (level+1>=levelsum.size())
                  break; 
            int sum = levelsum[level+1]; 
            for (int i=0;i<s;i++)
            {
                int x =0 ; 
                auto node = q.front(); 
                q.pop(); 
                if (node->left)
                {
                    x+=node->left->val;
                    q.push(node->left); 
                } 
                if (node->right)
                {
                    x+=node->right->val;
                    q.push(node->right); 
                } 
                cout<<sum<<" "<<x<<endl; 
                 if (node->left)
                    node->left->val = sum-x; 
                if (node->right)
                     node->right->val=sum-x; 
                
            }
            level++; 
        }
        
        return root;
    }
};