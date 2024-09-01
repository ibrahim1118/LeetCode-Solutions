class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
      if (n*m!=original.size())
          return {}; 
       vector<vector<int>>ans;
        int i =0; 
        for (int j =0;j<m;j++)
        {
            vector<int> row;
            for (int k =0 ;k<n;k++)
            
            {
                row.push_back(original[i]); 
                i++;
            }
            ans.push_back(row);
        }
        return ans; 
    }
};