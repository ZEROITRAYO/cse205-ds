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
        map<int,map<int,multiset<int>>>mp;
        void inorder(TreeNode *root,int i,int j){
            if(root==NULL){
                return ;
            }
            inorder(root->left,i-1,j+1);
            mp[i][j].insert(root->val);
            inorder(root->right,i+1,j+1);
        }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
      inorder(root,0,0);
      vector<vector<int>>ans;
      for(auto i:mp){
          vector<int>st;
          for(auto j:i.second){
               for(auto k:j.second){
                   st.push_back(k);
               }
          }
          ans.push_back(st);
      }

      return ans;

    }
};