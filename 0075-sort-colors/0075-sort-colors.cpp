class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int>v(4); 
        for (auto i:nums)
        {
            v[i]++; 
        }
        int j=0; 
        for (int i=0;i<3;i++)
        {
            while(v[i])
            {
               nums[j] = i; 
               j++; 
               v[i]--;
            }
        }
    
    }
};