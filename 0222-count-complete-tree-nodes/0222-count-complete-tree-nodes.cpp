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

// algorithm tht is less than o(N)
class Solution {
public:
     pair<bool,int> isPerfect(TreeNode* root){
         int leftHeight =0;
         int rightHeight =0;
         TreeNode* temp = root;
         while(temp){
             leftHeight++;
             temp=temp->left;
         }
         temp=root;
         while(temp){
             rightHeight++;
             temp=temp->right;
         }
         return {leftHeight==rightHeight,leftHeight};
     }
    int countNodes(TreeNode* root) {
        if(root==NULL) return 0;
       pair<bool,int>p1=isPerfect(root->left);
        pair<bool,int>p2 =isPerfect(root->right);
        int count =1;
          if(p1.first && p2.first){
            count = 1+pow(2,p1.second)-1 + pow(2,p2.second)-1;
              return count;
        }
        if(p1.first){
            count+=pow(2,p1.second)-1+ countNodes(root->right);
        
        }
         if(p2.first){
            count += pow(2,p2.second)-1+countNodes(root->left);
           
        }
      
       return count;
    }
};