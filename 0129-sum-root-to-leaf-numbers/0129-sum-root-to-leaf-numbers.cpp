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
void dfs(TreeNode*root,vector<int>&ans,int &curr){
   if(root==NULL){
   
   return;
   
   }
    curr=(curr*10)+root->val;
            if (root->left == NULL && root->right == NULL) {
            ans.push_back(curr);
            curr /= 10;      
            return;
        }

   dfs(root->left,ans,curr);
  
   dfs(root->right,ans,curr);
   curr/=10;

}
    int sumNumbers(TreeNode* root) {
        vector<int>ans;
        int curr=0;
        long long sum=0;
        dfs(root,ans,curr);
        
        for(int x:ans){
            sum+=x;
        }
        return sum;
    }
};