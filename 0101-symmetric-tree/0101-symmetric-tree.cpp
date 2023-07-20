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
    bool ans;
     bool Final;
bool areMirror(TreeNode *root1, TreeNode *root2)
{
   if(root1==NULL && root2==NULL) return true;
   if(root1==NULL && root2!=NULL) return false;
    if(root1!=NULL && root2==NULL) return false;
   ans = ((root1->val ==root2->val)&&areMirror(root1->left,root2->right)&&areMirror(root1->right,root2->left));
   return ans;
}
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        else{
        TreeNode* root1= root->left;
        TreeNode* root2 = root->right;
         Final = areMirror(root1,root2);}
        
        return Final;
    }
};