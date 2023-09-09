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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* temp = new TreeNode(val,NULL,NULL);
        if(root == NULL) return temp;
        TreeNode* temp1 = root;
        TreeNode* temp2 = NULL;
        while(temp1){
            if(temp1->val>val){
               temp2 = temp1;
                temp1 = temp1->left;
            }
            else 
            {
                temp2 = temp1;
                temp1 = temp1->right;
            }
        }
        if(temp2->val > val){
            temp2->left = temp;
        }
        else {
            temp2->right = temp;
        }
        return root;
    }
};