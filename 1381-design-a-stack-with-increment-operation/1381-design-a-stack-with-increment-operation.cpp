class CustomStack {
public:
    int top ; 
    int mx; 
    vector<int>st;  
    CustomStack(int maxSize) {
        mx =maxSize; 
    }
    
    void push(int x) {
      if (st.size()==mx)
         return; 
        st.push_back(x); 
    }
    
    int pop() {
        if (!st.size())
            return -1; 
        int a = st[st.size()-1]; 
        st.pop_back(); 
        return a; 
    }
    
    void increment(int k, int val) {
        int s = st.size(); 
       for (int i=0;i<min(k ,s );i++)
       {
           st[i]+=val; 
       }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */