class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
       int n  = grid.size(); 
       int m = grid[0].size(); 
        int ans =0; 
       for (int i=0;i<n;i++)
       {
           if (grid[i][0]==0)
           {
               for (auto &j: grid[i])
                       j = 1-j; 
           }
       }
        for (auto i : grid)
        {
            for (auto j: i)
                cout<<j<<" "; 
            cout<<endl; 
        }
       for (int i=0;i<m;i++)
       {
           int zero =0; 
           for (int j=0;j<n;j++)
           {
               
               if (!grid[j][i])
                   zero++; 
           }
           ans+=max(zero , n - zero)*(1<<(m-i-1)); 
       }
       return ans; 
    }
};