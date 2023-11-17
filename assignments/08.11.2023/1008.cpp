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
    TreeNode* bstFromPreorder(vector<int>& preorder) 
    {
        TreeNode *root = NULL;

        if(root==NULL){
            TreeNode *newnode = new TreeNode(preorder[0]);
            root = newnode;
        }

        TreeNode *temp = root;
        
        for(int i=1;i<preorder.size();i++){
            root = temp;
        while(root){
            if(preorder[i]<root->val){
                if(root->left){
                    root = root->left;
                }
                else{
                    TreeNode *newnode = new TreeNode(preorder[i]);
                    root->left = newnode;
                    break;
                }
            }
            else {
                if(root->right){
                    root = root->right;
                }
                else{         
                    TreeNode *newnode = new TreeNode(preorder[i]);
                    root->right = newnode;
                    break;
                }
            }
        }
        }
        return temp;
        
    }
};