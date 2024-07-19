class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& mat) {
        vector<int>ans ; 
        for (int i =0;i<mat.size();i++)
        {
            for (int j =0;j<mat[0].size();j++)
            {
                int mx = mat[i][j]  , mn= mat[i][j];
                for (auto k: mat[i])
                      mn = min(k , mn); 
                for (int k =0;k<mat.size();k++)
                     mx = max(mx , mat[k][j]); 
                if (mx == mat[i][j]&&mn==mat[i][j])
                    ans.push_back(mx); 
            }
        }
        return ans; 
    }
};