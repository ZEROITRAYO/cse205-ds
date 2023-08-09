class Solution {
public:
    void reverseString(vector<char>& s) {
        int start=0;
        int end=s.size()-1;
        
        solve(start,end,s);
    }
    void solve(int start,int end,vector<char>& s ){
        if(start>end){
            return ;
        }
        swap(s[start],s[end]);
        solve(++start,--end,s);
    }
    
};