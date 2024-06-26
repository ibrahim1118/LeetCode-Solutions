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
    vector<TreeNode*> tree;  
    TreeNode* balanceBST(TreeNode* root) {
        inOrder(root);
        return solve(0, tree.size() - 1);
    }
private:
    void inOrder(TreeNode* root) {
        if (root) {
            inOrder(root->left);
            tree.push_back(root);
            inOrder(root->right);
        }
    }
    TreeNode* solve(int l, int r) {
        if (l <= r) {
            int mid = (l + r) / 2;
            tree[mid]->left = solve( l, mid - 1);
            tree[mid]->right = solve( mid + 1, r);
            return tree[mid];
        }
        return NULL;
    }
};