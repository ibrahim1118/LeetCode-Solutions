class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       map<int ,int>mp; 
       for (auto i : nums)
           mp[i]++; 
        int i =0; 
        for (auto j : mp)
        {
            int n = min(2 , j.second); 
            for (int k =0;k<n;k++)
            {
                nums[i] = j.first;
                i++; 
            }
        }
        return i; 
    }
};