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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>v;
        if(root==NULL) return v;
        stack<pair<TreeNode*,int>>stk;
        stk.push({root,0});
        while(!stk.empty()){
            pair<TreeNode*,int> p = stk.top();
            stk.pop();
            if(p.second==1){
                v.push_back(p.first->val);
            }
            else{
                if(p.first->right){
                    stk.push({p.first->right,0});
                }
                stk.push({p.first,1});
                if(p.first->left){
                    stk.push({p.first->left,0});
                }
            }
            
        }
        return v;
    }
};