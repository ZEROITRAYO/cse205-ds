class Solution {
public:
    string removeStars(string s) {
        vector<char> temp;
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='*'){
                temp.pop_back();
            }
            else{
                temp.push_back(s[i]);
            }
        }

        for(int i=0;i<temp.size();i++){
            ans+=temp[i];
        }
        // reverse(ans.begin(),ans.end());
        return ans;
    }
};