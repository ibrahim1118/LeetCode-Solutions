/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if (root ==NULL)
            return {};
        queue<Node*>q; 
        vector<vector<int>>ans; 
        q.push(root); 
        while(!q.empty())
        {
            int n = q.size();
            vector<int>a; 
            for (int i=0;i<n;i++)
            {
                auto node = q.front(); 
                q.pop(); 
                if (node!=NULL){
                  a.push_back(node->val); 
                  for (auto i : node->children)
                      q.push(i);
                }
            }
            ans.push_back(a); 
        }
        return ans; 
    }
};