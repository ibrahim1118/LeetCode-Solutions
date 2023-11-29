class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int ans =0; 
        vector<int>b(32); 
        for (int i=0;i<nums.size();i++)
        {
           bitset<32> s = nums[i]; 
           for (int j=0;j<32;j++)
           {  if (s[j])
               b[j]++; 
           }
        }
        // for (auto i: b)
        //     cout<<i<<" ";
        int n = nums.size(); 
        for (auto i : b)
        {
            if (i&&i!=n)
              ans+=i*(n-i); 
        }
        return ans; 
    }
};