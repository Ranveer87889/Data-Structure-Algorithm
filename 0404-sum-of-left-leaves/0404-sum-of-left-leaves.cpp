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
    int ans =0;
    void Sum(TreeNode* root){
         if(root==NULL ) return;
        if(root->left!=NULL){
            if(root->left->left ==NULL && root->left->right==NULL){
                ans = ans+root->left->val;
            }
        }
        Sum(root->left);
        Sum(root->right);
    }
    int sumOfLeftLeaves(TreeNode* root) {
       Sum(root);
        return ans;
        
    }
};