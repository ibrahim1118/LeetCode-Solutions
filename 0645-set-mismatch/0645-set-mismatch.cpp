class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>fre(10005); 
        for (auto i : nums)
            fre[i]++; 
        vector<int>ans; 
        for (int i=1;i<=nums.size();i++)
        {
            if (fre[i]>1)
              ans.push_back(i); 
        }
        for (int i =1;i<=nums.size();i++)
        {
            if(fre[i]==0)
              ans.push_back(i); 
        }
        return ans; 
    }
};