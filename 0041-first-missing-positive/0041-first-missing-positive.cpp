class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       sort(nums.begin() , nums.end()); 
       map<int,int>mp; 
        for (auto i : nums)
                mp[i]++; 
        for (int i=1;i<200002;i++)
        {
            if (!mp.count(i))
                 return i; 
        }
        return 200002; 
    }
};