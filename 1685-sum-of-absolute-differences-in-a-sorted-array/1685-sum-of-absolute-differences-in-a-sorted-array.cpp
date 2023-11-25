class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        for (int i=1;i<nums.size();i++)
        {
            nums[i]+=nums[i-1]; 
        }
        vector<int>ans;
        for (int i=0;i<nums.size();i++)
        {
            if (i==0)
            {
             
                ans.push_back((nums[nums.size()-1]-nums[i])-(nums.size()-i-1)*nums[i]); 
            }
            else if (i==nums.size()-1)
            {
                  
                ans.push_back((nums[i]-nums[i-1])*i-(nums[i-1])); 
            }
            else 
            {
                int c = nums[i]-nums[i-1]; 
                ans.push_back(c*i-(nums[i-1])+(nums[nums.size()-1]-nums[i])-(nums.size()-i-1)*c);    
            }
        }
    return ans; 
    }
};