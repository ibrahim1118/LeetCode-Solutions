class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& ma) {
        int n=ma.size();
        int m=ma[0].size();
        vector<vector<int>> ans(m, vector<int>(n));
        for(int i=0;i<n;i++)
            {
            for(int j=0;j<m;j++)
                ans[j][i]=ma[i][j];
        }
        return ans;
    }
};