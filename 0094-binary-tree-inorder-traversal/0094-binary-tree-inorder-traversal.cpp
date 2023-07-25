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
public: void Print(TreeNode* root,vector<int>&v){
        if(!root) return;
        
        Print(root->left,v);
    v.push_back(root->val);
        Print(root->right,v);
        
    }
  
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>v;
        Print(root,v);
        return v;
    }
};