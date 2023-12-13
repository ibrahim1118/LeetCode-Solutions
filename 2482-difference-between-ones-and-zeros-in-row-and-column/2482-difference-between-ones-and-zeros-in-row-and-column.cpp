class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
       map<pair<int,int>,int> row , col ; 
       for (int i=0;i<grid.size();i++)
       {
           for (int j =0;j<grid[0].size();j++)
           {
               row[{i ,grid[i][j]}]++; 
               col[{j ,grid[i][j]}]++; 
           }
       }
       for (int i=0;i<grid.size();i++)
       {
           for (int j=0;j<grid[0].size();j++)
           {
               grid[i][j] = row[{i ,1}]+col[{j,1}]-row[{i ,0}]-col[{j,0}]; 
           }
       }
       return grid; 
    }
};