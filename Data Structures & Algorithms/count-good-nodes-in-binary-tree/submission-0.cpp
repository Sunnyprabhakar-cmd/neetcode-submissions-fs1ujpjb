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

    int countt(TreeNode* root, int max){
        if(!root){
            return 0;
        }
        int count=0;
        if(root->val>=max){
            count=1;
            max=root->val;
        }
        count+=countt(root->left,max);
        count+=countt(root->right,max);
        return count;
    }
    int goodNodes(TreeNode* root) {
        return countt(root,root->val);
    }
};