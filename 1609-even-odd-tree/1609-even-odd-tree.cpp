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
    bool isEvenOddTree(TreeNode* root) {
      int leve =0; 
      queue<TreeNode*> q; 
      q.push(root); 
      while(!q.empty())
      {
          int n= q.size(); 
          vector<int>v; 
          set<int>st; 
          if (leve%2)
          {
              //vector<int>v; 
              //int isodd =0; 
              for (int i=0;i<n;i++)
              {
                  auto t = q.front(); 
                  q.pop();
                  if (t->val%2)
                        return false;
                  st.insert(t->val); 
                  v.push_back(t->val); 
                  if (t->left)
                      q.push(t->left);
                    if (t->right)
                      q.push(t->right); 
                  
              }
              if(!is_sorted(v.rbegin() , v.rend()))
                    return false; 
              if (st.size()!=v.size())
                  return false; 
              
          }
          else 
          {
            vector<int>val; 
             
              for (int i=0;i<n;i++)
              {
                  auto t = q.front(); 
                  q.pop();
                  if (t->val%2==0)
                        return false;
                  st.insert(t->val);
                  v.push_back(t->val);
                       if (t->left)
                      q.push(t->left);
                    if (t->right)
                      q.push(t->right); 
              }
              if(!is_sorted(v.begin() , v.end()))
                    return false;   
              if (st.size()!=v.size())
                  return false; 
          }
          leve++;
      }
        return true; 
    }
};