class Solution {
public:

    void solve(int n,int k,vector<vector<int>>& ans,vector<int>& temp ){
            
            if(n==0){
                if(temp.size()==k){
                ans.push_back(temp);
                 
            }
               return;
            }
            temp.push_back(n);
            solve(n-1,k,ans,temp);
            temp.pop_back();
            solve(n-1,k,ans,temp);

    }


    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(n,k,ans,temp);
        return ans;
    }
};