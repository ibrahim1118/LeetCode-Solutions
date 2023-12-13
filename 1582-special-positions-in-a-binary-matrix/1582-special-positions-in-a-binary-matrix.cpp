class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
       int ans =0; 
       for(int i=0;i<mat.size();i++)
       {
           for (int j=0;j<mat[0].size();j++)
           {
               if (mat[i][j])
               {
                   int a =0; 
                   for (int k=0;k<mat.size();k++)
                   {
                       a+=mat[k][j]; 
                   }
                   for (int k=0;k<mat[0].size();k++)
                   {
                       a+=mat[i][k]; 
                   }
                   if (a==2)
                       ans++; 
               }
           }
       }
        return ans; 
    }
};