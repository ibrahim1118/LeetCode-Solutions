class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v(1004); 
        for (auto i : nums1)
            v[i]++; 
        vector<int>ans;                                                           for (auto i : nums2)
            if (v[i])
            {
                ans.push_back(i); 
                v[i]=0; 
            }
        return ans; 
    }
};