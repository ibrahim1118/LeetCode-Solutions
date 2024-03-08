class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int ans =0; 
        int mx =0; 
        vector<int>v(104); 
        for (auto i : nums)
        {
            v[i]++; 
            mx = max(mx, v[i]); 
        }
        for (auto i : v)
            if (i==mx)
                ans+=i; 
        return ans; 
    }
};