class Solution {
public:
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
        long long ans =0; 
        vector<int>v; 
        for (auto i : nums)
        {
            ans+=i; 
            v.push_back((i^k) -i ); 
        }
        sort(v.rbegin() , v.rend()); 
        for (auto i : v)
            cout<<i<<" "; 
        for (int i=0;i<v.size()-1;i++)
        {
            if (v[i]+v[i+1]>=0)
            {
                ans+=v[i]+v[i+1]; 
                i++; 
            }
            else 
                break; 
        }
        return ans; 
    }
};