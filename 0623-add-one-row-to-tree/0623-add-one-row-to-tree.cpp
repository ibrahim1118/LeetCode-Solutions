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
    // time/space: O(n)/O(h)
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
      
        if (depth == 1) {
            return new TreeNode(val, root, NULL);
        }
        solve(root, val, depth, 1);
        return root;
    }

    void solve(TreeNode* node, int val, int depth, int curr_depth) {
       
        if (node == NULL) return;
        if (curr_depth == (depth - 1)) {
            node->left = new TreeNode(val, node->left, NULL);
            node->right = new TreeNode(val, NULL, node->right);
            return;
        }

       
        solve(node->left, val, depth, curr_depth + 1);
        solve(node->right, val, depth, curr_depth + 1);
    }
};