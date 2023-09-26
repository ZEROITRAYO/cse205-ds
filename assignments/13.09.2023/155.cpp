class MinStack {
public:
    stack<int>s1,min_st; 
    MinStack() {
        int val;
    }
    void push(int val) {
       
        s1.push(val);
    
        if(min_st.empty() || val <= min_st.top()){
            min_st.push(val);
        }
    }
    void pop() {
        
        if(s1.top()== min_st.top()){ 
           min_st.pop();
        }
        s1.pop(); 
    }
    
    int top() {
        return s1.top();
    }
    
    int getMin() {
       
        return min_st.top();
    }
    
};