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

// wrost tc ---o^n2
class Solution {
public:
    int GetHeight(TreeNode* root){
        if(!root) return 0;
        return 1+max(GetHeight(root->left),GetHeight(root->right));
    }
    int ans =INT_MIN;
   void diameter(TreeNode* root){
       if(!root) return;
        int h1 = GetHeight(root->left);
        int h2 = GetHeight(root->right);
        ans = max(ans,1+h1+h2);
        diameter(root->left);
        diameter(root->right);
   }
    int diameterOfBinaryTree(TreeNode* root) {
       diameter(root);
        return ans-1;
        
    }
};