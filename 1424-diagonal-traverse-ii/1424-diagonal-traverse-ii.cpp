class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<int>ans; 
        map<int,vector<int>>v; 
        for (int i=0;i<nums.size();i++)
        {
            for (int j=0;j<nums[i].size();j++)
              v[i+j].push_back(nums[i][j]);     
            
        }
        for (auto i : v)
        {
            for (int j =i.second.size()-1;j>=0;j--)
            {
                ans.push_back(i.second[j]); 
            }
        }
        return ans; 
    }
};