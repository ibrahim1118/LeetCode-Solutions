class Solution {
public:
    int minOperations(vector<int>& nums) {
       vector<int>freq(1000006,0); 
        for (auto i : nums)
            freq[i]++; 
        int ans =0; 
        for (int &i : freq)
        {
           if (i==1)
              return -1; 
           else if (i%3==0)
                ans+=i/3; 
           else if (i%3==2)
           {
               ans+=i/3; 
               ans++; 
           }
           else if (i%3==1)
           {
               ans+=2; 
               ans+=(i-4)/3; 
           }
        
        }
        return ans; 
    }
};