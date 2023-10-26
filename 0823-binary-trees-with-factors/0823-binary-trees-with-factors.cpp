class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
       long long  mod = 1e9+7;
       sort(arr.begin() ,arr.end()); 
       map<int,long long >mp;
       for (auto i : arr)
              mp[i]=1;
        for (int i=1;i<arr.size();i++)
        {
            auto a = mp.find(arr[i]); 
            long long  count =0; 
            for (int j =0;j<i;j++)
            {
                if (arr[i]%arr[j]==0)
                {
                    auto b = mp.find(arr[i]/arr[j]);
                    auto c = mp.find(arr[j]); 
                    if (b!=mp.end())
                    {
                       count+=((b->second%mod)*(c->second%mod))%mod; 
                        count%=mod; 
                    }
                }
            }
            a->second+=count%mod;
            a->second%=mod; 
        }
        int ans =0; 
        for (auto i : mp)
        {
            ans += i.second%mod; 
            ans%=mod; 
         }
        return ans; 
    }
};