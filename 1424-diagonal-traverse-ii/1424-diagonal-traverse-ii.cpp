class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<int>ans; 
        vector<vector<int>>v(200005); 
        int mx =0; 
        for (int i=0;i<nums.size();i++)
        {
            for (int j=0;j<nums[i].size();j++)
              v[i+j].push_back(nums[i][j]) , mx = max(mx , i+j);     
            
        }
        for (int i=0;i<=mx;i++)
        {
            for (int j =v[i].size()-1;j>=0;j--)
            {
                ans.push_back(v[i][j]); 
            }
        }
        return ans; 
    }
};