class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long sum =0 ; 
        vector<long long >pre; 
        for (auto i:nums)
        {
            sum+= i;
            pre.push_back(sum); 
        }
        sum=0; 
        set<int>st ; 
        map<int,int>mp; 
        for (int i=0;i<k;i++)
        {
            st.insert(nums[i]); 
            mp[nums[i]]++; 
        }
        if (st.size()==k)
            sum= pre[k-1]; 
        for (int l=1 ,r =k;r<nums.size();l++,r++)
        {
            mp[nums[l-1]]--; 
            if (mp[nums[l-1]]==0)
                st.erase(nums[l-1]); 
            mp[nums[r]]++; 
            st.insert(nums[r]); 
            if (st.size()==k)
            {
            sum=  max(sum , pre[r] - pre[l-1]); 
            }
        }
        return sum; 
    }
};