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
class BSTIterator {
void inorder(TreeNode *root , vector<int> &vec){
    if(root == NULL){
        return;
    }

    inorder(root->left , vec);
    vec.push_back(root->val);
    inorder(root->right , vec);
}
int start;
vector<int> vec;
public:
    BSTIterator(TreeNode* root) {
        inorder(root , vec);
        start = 0;
    }
    
    int next() {
        if(start < vec.size()){
            return vec[start++];
        }
        return -1;
    }
    
    bool hasNext() {
        if(start < vec.size()){
            return true;
        }
        return false;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */