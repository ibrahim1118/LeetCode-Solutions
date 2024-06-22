class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
       vector<int> v; 
        for (auto i : nums)
            v.push_back(i%2); 
        for (int i=1;i<v.size();i++)
               v[i]+=v[i-1];
        
        vector<int>mp(50005) ;
        mp[0] =  1 ; 
        int ans =0;
        for (auto i :v )
        {
            if (i>=k)
            ans+=mp[i-k]; 
            mp[i]++; 
        }
        return ans;
    }
};