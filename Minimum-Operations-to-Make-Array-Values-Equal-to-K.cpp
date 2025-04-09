class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
       set<int>st ; 
       for (auto i : nums)
       {
            if (i<k)
               return -1 ; 
            st.insert(i); 
       } 
       if (st.count(k))
          return st.size()-1; 
       return st.size(); 
    }
};