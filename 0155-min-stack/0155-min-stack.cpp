class MinStack {
public:
    stack<int>st; 
    MinStack() {
        
    }
    
    void push(int val) {
          st.push(val);
    }
    
    void pop() {
        st.pop(); 
    }
    
    int top() {
        return st.top(); 
    }
    
    int getMin() {
        int ma = INT_MAX; 
        stack<int>s; 
        while(!st.empty())
        {
            s.push(st.top()); 
            ma = min(st.top() ,ma); 
            st.pop(); 
        }
         while(!s.empty())
        {
            st.push(s.top()); 
             
            s.pop(); 
        }
        return ma; 
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */