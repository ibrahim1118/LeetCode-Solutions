class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& mat) {
        for (int i=1;i<mat.size();i++)
        {
            for (int j=0;j<mat[i].size();j++)
            {
                int a = mat[i-1][j];
                if (j-1>=0)
                    a= min(a , mat[i-1][j-1]); 
                if (j+1<mat[i-1].size())
                    a = min(a , mat[i-1][j+1]); 
                mat[i][j]+=a; 
            }
        }
        int ans =1e9;
        for (auto i : mat[mat.size()-1])
            ans = min(ans , i); 
        return ans; 
    }
};