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
    int preIndex=0;
    TreeNode* build(vector<int>& preorder, vector<int>&inorder, int left , int right, unordered_map<int,int>&map){
        if(left>right){
            return NULL;
        }
        int rootval=preorder[preIndex++];
        TreeNode* root= new TreeNode(rootval);
        int mid=map[rootval];
        root->left=build(preorder,inorder,left,mid-1,map);
        root->right=build(preorder,inorder,mid+1,right,map);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
       unordered_map<int,int>map;
       for(int i=0;i<preorder.size();i++){
        map[inorder[i]]=i;
       }
       return build(preorder,inorder,0,inorder.size()-1,map);
    }
};
