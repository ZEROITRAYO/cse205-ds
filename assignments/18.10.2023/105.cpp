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
    int x;
    TreeNode* helper(vector<int> &preorder, vector<int> inorder,int a,int b){
        if(a>b)
        return NULL;
        TreeNode* node= new TreeNode(preorder[x++]);
        int i;
        for(i=a;i<=b;i++)
        {
            if(inorder[i]==node->val)
            break;
        }
        node->left= helper(preorder,inorder,a,i-1);
        node->right=helper(preorder,inorder,i+1,b);
        return node;

    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return helper(preorder,inorder,0,preorder.size()-1);
    }
};