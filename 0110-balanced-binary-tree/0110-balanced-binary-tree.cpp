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
    pair<bool,int> Balanced(TreeNode* root){
        if(!root) return {true,0};
        pair<bool,int> lh=Balanced(root->left);
        pair<bool,int> rh = Balanced(root->right);
        bool f= (lh.first&&rh.first&&abs(lh.second-rh.second)<=1);
        int h = 1+max(lh.second,rh.second);
        return{f,h};
    }
    bool isBalanced(TreeNode* root) {
        pair<bool,int> p;
        p=Balanced(root);
        return p.first;
    }
};