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
    
 void TreePaths(TreeNode* root,vector<string>&ans,string s){
    if(!root) return ;
	s+=to_string(root->val);
	s+="->";
   if(!root->left && !root->right){
	   s.resize(s.size()-2);
	   ans.push_back(s);
      
   }

	TreePaths(root->left,ans,s);
	TreePaths(root->right,ans,s);
	//s.resize(s.size()-1);

 }
    vector<string> binaryTreePaths(TreeNode* root) {
  string s ="";
          vector<string>ans;
		TreePaths(root,ans,s);
        return ans;
    }
};