class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m = rolls.size(); 
        int all = (n+m)*mean;
        int sum =0 ; 
        for (auto i: rolls)
        {
            sum +=i; 
        }
        all-=sum ; 
        if (all<n||all>n*6)
              return {}; 
        int x  = all/n; 
        int re = all%n; 
        vector<int>ans(n , x); 
        int ind = 0 ; 
        while(re--)
        {
            ans[ind]++; 
            ind++; 
        }
        return ans; 
    }
};