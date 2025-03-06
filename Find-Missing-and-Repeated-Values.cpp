class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size(); 
        vector<int>fre(n*n+1); 
        for (auto i: grid)
        {
            for (auto j : i)
               fre[j]++; 
        }
        vector<int>ans(2); 
        for (int i =1 ;i<=n*n;i++)
        {
           if(fre[i]==2)
           ans[0] = i; 
           else if (fre[i]==0)
           ans[1] = i; 
        }
        return ans; 
    }
};