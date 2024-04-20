class Solution {
    vector<vector<int>>ans;
    int x1, x2 , y1 , y2; 
public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land)     {
        for (int i=0;i<land.size();i++)
        {
            for (int j=0;j<land[0].size();j++)
            {
                if (land[i][j])
                {
                    x1 = i ; 
                    x2 = i ; 
                    y1 = j ; 
                    y2 = j ; 
                    dfs(i , j , land); 
                    ans.push_back({x1  , y1 , x2 , y2});
                }
            }
        }
        return ans;
    }
    void dfs(int i  , int j , vector<vector<int>>&land)
    {
        if(i<0||j<0||i>=land.size()||j>=land[0].size()||land[i][j]==0)
               return;
        x1 = min(x1 , i); 
        x2 = max(x2 , i); 
        y1 = min(y1 , j ); 
        y2 = max(y2 , j); 
        land[i][j]=0;
        dfs(i+1 , j , land); 
        dfs(i-1 , j , land); 
        dfs(i, j+1 , land); 
        dfs(i , j -1, land); 
        
    }
};