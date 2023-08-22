class Solution {
public:

    void solve (int cnt1,int cnt2, int n, vector<string>& ans, string& temp, int ind){
        if(ind==n*2){
            ans.push_back(temp);
            return;
        }
        if(cnt1<n){
            temp=temp+'(';
            solve(cnt1+1,cnt2,n,ans,temp,ind+1);
            temp.pop_back();
        }
        if(cnt2<cnt1){
            temp=temp+')';
             solve(cnt1,cnt2+1,n,ans,temp,ind+1);
             temp.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        string temp="";
        vector<string> ans;
        solve(0,0,n,ans,temp,0);
        return ans;
    }
};