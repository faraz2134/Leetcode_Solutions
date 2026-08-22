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

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int n=preorder.size();
        TreeNode*root=new TreeNode();
        root->val=preorder[0];
        for(int i=1;i<n;i++){
            TreeNode*curr=root;
            while(curr!=NULL){
                if(preorder[i]<curr->val){
                    if(curr->left==NULL){
                    curr->left=new TreeNode(preorder[i]);
                    break;
                    }curr=curr->left;
                    
                }
                else{
                    if(curr->right==NULL){
                        curr->right=new TreeNode(preorder[i]);
                        break;
                    }
                    curr=curr->right;
                }

            }
           



        }return root;
        
    }
};