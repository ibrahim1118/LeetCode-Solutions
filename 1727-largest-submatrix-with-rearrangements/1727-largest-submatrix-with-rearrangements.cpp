class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& ma) {
      int m = ma.size(), n = ma[0].size();int ans = 0;
        
        for (int x = 0; x<m; x++)
        {
            for(int y = 0; y<n; y++)
                if(ma[x][y] != 0 && x > 0)
                    ma[x][y] += ma[x-1][y];
            
            vector<int> height = ma[x]; sort(height.begin(), height.end());
            
            for(int i=0; i<n;i++) ans = max(ans, height[i] * (n-i));
        }
        for (auto i : ma)
        {
          for (auto j : i)
              cout<<j<<" "; 
            cout<<endl; 
         }
        return ans;
    }
};