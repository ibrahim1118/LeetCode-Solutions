class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int x =0; 
        for (auto i : nums)
        {
            x^=i; 
        
        }
         bitset<32> a=x ; 
         bitset<32> b= k;
        int ans =0; 
        for (int i=0;i<32;i++)
        {
            if (a[i]!=b[i])
                ans++; 
        }
        return ans; 
        
    }
};