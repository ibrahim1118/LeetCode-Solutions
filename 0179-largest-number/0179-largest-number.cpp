class Solution {
public:
    string largestNumber(vector<int>& nums) {
       sort(nums.begin() ,nums.end(),comper);
    string ans=""; 
    for (auto i: nums)
    {
        ans+=to_string(i); 
    }
    for (auto i: ans)
    {
        if (i!='0')
             return ans; 
    }
    return "0"; 
        
    }
    static  bool comper(int a , int b)
    {
        return to_string(a)+to_string(b)>to_string(b)+to_string(a); 
    }
};