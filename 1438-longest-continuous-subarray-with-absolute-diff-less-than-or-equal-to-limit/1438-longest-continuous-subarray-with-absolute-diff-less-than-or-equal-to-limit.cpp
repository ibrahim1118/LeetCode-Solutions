class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        multiset<int> st; 
        int ans =0; 
        int l =0 ; 
        for (int i =0;i<nums.size();i++)
        {
            st.insert(nums[i]); 
            while(!st.empty()&&*st.rbegin() -*st.begin()> limit)
            {
                st.erase(st.find(nums[l])); 
                l++; 
            }
            ans = max(ans , i - l+1);
        }
        return ans; 
    }
};