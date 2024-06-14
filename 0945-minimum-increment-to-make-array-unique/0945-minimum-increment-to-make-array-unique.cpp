class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
       vector<int>fre(1000005);
        int mx =0; 
        for (auto i : nums)
        { 
            mx = max(i , mx); 
            fre[i]++; 
        }
        deque<int>v; 
        int ans =0; 
        for (int i =0;i<=mx;i++)
        {
            if (fre[i]==0)
            {
                if (v.size())
                {
                    ans+=i-v[0]; 
                    v.pop_front(); 
                }
            }
            if (fre[i]>1)
            {
                while(fre[i]>1)
                { v.push_back(i);
                  fre[i]--; 
                } 
            }
        }
        mx++; 
        for (auto i: v)
        {
            ans+=mx -i; 
            mx++; 
        }
        return ans; 
    }
};