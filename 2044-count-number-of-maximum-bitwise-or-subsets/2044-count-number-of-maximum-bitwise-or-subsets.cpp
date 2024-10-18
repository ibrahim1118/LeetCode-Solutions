class Solution {
public:
    vector<int>f; 
    vector<int>v; 
    int countMaxOrSubsets(vector<int>& nums) {
        f.resize(1000007);
        v = nums; 
        solve(0 ,0); 
        int ans =0 ; 
        //cout<<v.size(); 
        for (int i=0;i<f.size();i++)
        {
            if (f[i])
              ans = f[i]; 
        }
        for (int i=0;i<5;i++)
            cout<<f[i]<<" "; 
        return ans; 
    }
    void solve(int i , int num)
    {
        if (i>=v.size())
        {
            f[num]++;
            return; 
        }
        solve(i+1 , num|v[i]); 
        solve(i+1 , num); 
    }
};