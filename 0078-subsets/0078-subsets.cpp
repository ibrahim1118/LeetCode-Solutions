class Solution {
    int n; 
    vector<vector<int>>ans; 
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        n = nums.size(); 
        solve(0,{},nums); 
        return ans; 
    }
    void  solve(int idx , vector<int> v,vector<int>& nums)
    {
        if (idx ==n)
        {
           ans.push_back(v); 
           return;
        }
        v.push_back(nums[idx]);
        solve(idx+1, v , nums); 
        v.pop_back();
        solve(idx+1, v , nums);  

    }
};