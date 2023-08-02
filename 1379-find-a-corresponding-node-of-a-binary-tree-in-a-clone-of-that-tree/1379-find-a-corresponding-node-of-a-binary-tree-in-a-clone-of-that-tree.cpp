/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
     TreeNode* temp;
    void getReference(TreeNode* cloned,int x){
        
        if(cloned==NULL) return;
         if(cloned ->val == x) {
             temp = cloned;
             return;
         }
         getReference(cloned->left,x);
         getReference(cloned->right,x);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        int x = target->val;
        getReference(cloned,x);
        return temp;
      
        
    }
};