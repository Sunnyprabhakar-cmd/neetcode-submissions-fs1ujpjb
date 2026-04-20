/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // 1. Base Case: If we hit null or find one of the targets, return it
        if (root == nullptr || root == p || root == q) {
            return root;
        }

        // 2. Recursive calls to search left and right subtrees
        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);

        // 3. If p and q are found in different subtrees, root is the LCA
        if (left != nullptr && right != nullptr) {
            return root;
        }

        // 4. Otherwise, return the non-null result (the side where nodes were found)
        return (left != nullptr) ? left : right;
    }
};
    