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
    int count =0;
    int ans;
    void recurse(TreeNode* root, int &k){
        if(root == NULL) return;
        recurse(root->left,k);
        count++;
        if(count == k){
            ans = root->val;
            return;
        }
        recurse(root->right,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        recurse(root,k);
        return ans;
    }
};