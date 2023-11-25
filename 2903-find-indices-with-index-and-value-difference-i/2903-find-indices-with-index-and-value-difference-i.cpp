class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int d, int v) {
        for (int i=0;i<nums.size();i++)
        {
            for (int  j =0; j<nums.size();j++)
            {
                if (abs(i -j)>=d&&abs(nums[i]-nums[j])>=v)
                    return {i , j}; 
            }
            
        }
        return {-1, -1}; 
    }
};