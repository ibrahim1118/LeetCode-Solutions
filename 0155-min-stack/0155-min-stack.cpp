class MinStack {
public:
    stack<int>st;
    set<int>s; 
    unordered_map<int,int>mp; 
    MinStack() {
        
    }
    
    void push(int val) {
          st.push(val);
          s.insert(val);
          mp[val]++; 
    }
    
    void pop() {
        int a =st.top();
        st.pop();
        mp[a]--; 
        if (mp[a]==0)
            s.erase(a); 
        
        
    }
    
    int top() {
        return st.top(); 
    }
    
    int getMin() {
       for (auto i : s)
           return i ; 
       return 0; 
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