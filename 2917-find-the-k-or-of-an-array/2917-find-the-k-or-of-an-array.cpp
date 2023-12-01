class Solution {
public:
    int findKOr(vector<int>& nums, int k) {
        vector<int>bit(32); 
        for (auto i : nums)
        {
            bitset<32> b = i; 
            for (int j=0;j<32;j++)
                 if (b[j])
                     bit[j]++; 
        }
        int ans=0; 
        for (int i=0;i<32;i++)
        {
            if (bit[i]>=k)
                ans+=pow(2,i);
        }
        return ans; 
    }
};