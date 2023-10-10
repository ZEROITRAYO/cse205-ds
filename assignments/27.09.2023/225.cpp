class MyStack {
    queue<int> q1, q2;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        q1 = q2;
        while(!q2.empty())
            q2.pop();
    }
    
    int pop() {
        int temp = top();
        q1.pop();
        return temp;
    }
    
    int top() {
        if(!q1.empty())
            return q1.front();
        return -1;
    }
    
    bool empty(){
        return q1.empty();
    }
};