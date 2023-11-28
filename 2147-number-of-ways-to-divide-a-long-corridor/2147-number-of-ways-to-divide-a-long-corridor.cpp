class Solution {
public:
    int numberOfWays(string c) {
        int s =0; 
        for (auto i : c)
        {
            if (i=='S')
                s++; 
        }
        if (s%2||s==0)
            return 0; 
        vector<int>v; 
        int a =0 ; 
        s=0; 
        for (auto i : c)
        {
            if (i=='S')
            {
                if (s==2)
                {
                    s=1; 
                    v.push_back(a); 
                    a=0; 
                }
                else 
                    s++; 
            }
            else 
            {
                if (s==2)
                    a++; 
            }
        }
        long long ans =1 ; 
        int mod = 1e9+7; 
        for (auto i : v)
        {
            ans = ((ans%mod)*((i+1)%mod))%mod; 
            ans%=mod ; 
        }
    return (int)ans; 
    }
};