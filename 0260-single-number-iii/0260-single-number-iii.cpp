class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
     int num1=0; 
         for (auto i:nums)
         {
             num1^=i; 
         }
        int b=0; 
        for (int i=0;i<32;i++)
        {
            if (num1&(1<<i))
            {
                b=i; 
                break; 
            }
        }
        vector<int>v1,v2; 
        for (auto i:nums )
        {
            if (i&(1<<b))
                v1.push_back(i); 
            else 
              v2.push_back(i); 
        }
        vector<int>ans(2); 
        for (auto i:v1)
            ans[0]^=i; 
        for (auto i :v2)
            ans[1]^=i; 
        return  ans; 
    }
};