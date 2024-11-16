class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int>ans; 
        for (int i=0;i+k<=nums.size();i++)
        {
            vector<int>tem; 
            int ok = true; 
            for (int j=i;j<i+k;j++)
            {
                if (tem.size()==0)
                      tem.push_back(nums[j]); 
                else if (nums[j]==tem[tem.size()-1]+1)
                    tem.push_back(nums[j]); 
                else 
                {
                    ok = false; 
                    break; 
                }
                    
            }
            if (ok)
                ans.push_back(tem[k-1]); 
            else 
                ans.push_back(-1); 
        }
        return ans; 
    }
};