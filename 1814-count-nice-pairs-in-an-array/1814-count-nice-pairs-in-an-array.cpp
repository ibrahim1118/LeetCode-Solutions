class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        unordered_map<int,long long>mp;
        int mod =1e9+7; 
        for (int i : nums)
        {
            //cout<<i<<" "<<rev(i)<<" "<<i-rev(i)<<endl; 
            mp[i-rev(i)]++; 
        }
        int ans =0;
        for (auto i : mp)
        {
            //cout<<i.first<<" "<<i.second<<endl; 
            ans+=(((i.second%mod)*((i.second-1)%mod)/2)%mod);
            ans%=mod; 
                
        }
        return (int)ans; 
    }
    int rev(int a)
    {
        int re =0; 
        while(a)
        {
            re*=10; 
            re+=a%10; 
            a/=10; 
        }
        return re; 
    }
};