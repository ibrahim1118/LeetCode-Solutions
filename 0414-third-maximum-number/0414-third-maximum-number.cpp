class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>st ; 
        for (auto i : nums)
              st.insert(i); 
        vector<int>v; 
        for (auto i : st)
            v.push_back(i); 
        if (v.size()>=3)
          return  v[v.size()-3]; 
        else 
            return v[v.size()-1];
    }
};