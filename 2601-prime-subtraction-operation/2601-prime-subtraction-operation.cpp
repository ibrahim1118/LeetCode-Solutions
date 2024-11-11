class Solution {
public:
    bool primeSubOperation(vector<int>& nums) {
        vector<int>prime; 
        for (int i=1;i<1001;i++)
        {
            if (isprime(i))
                prime.push_back(i); 
        }
        for (int i=0;i<nums.size();i++)
        {
            int x =0 ; 
            for (int j=0;j<prime.size();j++)
            {
                if (i==0)
                {
                    if (prime[j]<nums[i])
                         x = max(x , prime[j]); 
                }
                else if (prime[j]<nums[i]&&(nums[i]-prime[j]>nums[i-1]))
                    x = max(prime[j] , x); 
            }
            nums[i]-=x ;
           // cout<<nums[i]<<" "; 
            if (i>0&&nums[i]<=nums[i-1])
                  return false; 
        }
        return true; 
        
    }
    bool isprime(int n)
    {
        if (n<=1)
            return false; 
        for (int i=2;i*i<=n;i++)
        {
            if (n%i==0)
                return false; 
        }
        return true; 
    }
};