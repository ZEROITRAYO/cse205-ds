class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        stack<int> st1;

        for(int i=0;i<s.size();i++){
            if(s[i]=='#'){
                if(!st.empty()){
                    st.pop();
                }
            }
            else{
                st.push(s[i]);
            }
        }

         for(int i=0;i<t.size();i++){
            if(t[i]=='#'){
                if(!st1.empty()){
                    st1.pop();
                }
            }
            else{
                st1.push(t[i]);
            }

           
        }
         while(!st.empty() && !st1.empty()){
                if(st.top()!=st1.top()){
                    return false;
                }
                st.pop();
                st1.pop();
            }
                if(st.size()==0 && st1.size()==0){
                    return true;
                }
                else{
                    return false;
                }

    }
};