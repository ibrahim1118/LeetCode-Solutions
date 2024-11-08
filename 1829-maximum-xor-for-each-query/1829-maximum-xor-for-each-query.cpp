class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        vector<int> ans; 
        int n = nums.size(); 
        vector<int>bits(21); 
        for (auto i: nums)
        {
            bitset<21> x =i; 
            for (int j=0;j<21;j++)
            {
                if (x[j])
                    bits[j]++; 
            }
        }
        for (int i =0;i<n;i++)
        {
            int k=0; 
            for (int j=0;j<maximumBit;j++)
            {
                if (bits[j]%2==0)
                    k+=(1<<j);
            }
            ans.push_back(k); 
            bitset<21> x = nums.back(); 
            nums.pop_back(); 
            for (int j=0;j<21;j++)
            {
                if (x[j])
                    bits[j]--; 
            }
            
        }
        return ans; 
    }
};