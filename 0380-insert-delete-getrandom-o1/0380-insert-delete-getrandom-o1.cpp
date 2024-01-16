class RandomizedSet {
public:
    unordered_set<int>st; 
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
       int a  = st.size();
        st.insert(val); 
        return a<st.size(); 
    }
    
    bool remove(int val) {
        int a  = st.size();
        st.erase(val); 
        return a>st.size();   
    }
    
    int getRandom() {
         int ind = rand() % st.size();
        return *next(st.begin(), ind);
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */