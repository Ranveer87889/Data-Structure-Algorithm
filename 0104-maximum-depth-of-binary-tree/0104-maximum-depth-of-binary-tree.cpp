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
    int l=1;int ans =0;
    void height(TreeNode*root,int l){
        if(root==NULL)return;
        if(root->left==NULL && root->right==NULL){
            ans = max(ans,l);
            return;
        }
        height(root->left,l+1);
        height(root->right,l+1);
    }
    int maxDepth(TreeNode* root) {
        height(root,l);
        return ans;
    }
};