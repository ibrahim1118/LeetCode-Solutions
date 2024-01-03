class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        vector<int>row ,col; 
        for (int i=0;i<mat.size();i++)
        {
            for (int j=0;j<mat[0].size();j++)
            {
                if (mat[i][j]==0)
                {
                    row.push_back(i); 
                    col.push_back(j); 
                }
            }
        }
        for (auto i : row)
        {
            for (int j=0;j<mat[i].size();j++)
                 mat[i][j]=0; 
        }
         for (auto i : col)
        {
            for (int j=0;j<mat.size();j++)
                 mat[j][i]=0; 
        }
         
    }
};