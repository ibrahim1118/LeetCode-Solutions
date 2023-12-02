class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>st; 
        for (auto i : nums)
            st.insert(i); 
        return st.size()<nums.size(); 
    }
};