class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& row, vector<int>& col) {
      vector<vector<int>>ans(row.size() , vector<int>(col.size())) ; 
        int i =0, j=0; 
        while(i<row.size()&&j<col.size())
        {
            ans[i][j] = min(row[i] , col[j]); 
            if (row[i]>col[j])
            {
                row[i]-=col[j]; 
                j++; 
            }
            else if (row[i]<col[j])
            {
                col[j]-=row[i]; 
                i++; 
            }
            else 
            {
                i++ , j++; 
            }
        }
        
        return ans ; 
    }
};