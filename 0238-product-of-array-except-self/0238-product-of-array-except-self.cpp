class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p=1;
        int z =0; 
        for (auto i : nums)
        {
            if (i!=0)
            p*=i; 
            else 
                z++; 
        }
        if (z>=2)
        {
            for (auto &i : nums)
                i =0; 
        }
        else if (z==1)
        {
            for (auto &i : nums)
            {
                if (i==0)
                    i = p; 
                else 
                    i =0; 
            }
        }
        else 
        {
            for (auto &i : nums)
                 i = p/i; 
        }
        return nums; 
    }
};