class Solution {
public:
    vector<int> getRow(int r) {
     vector<vector<int>>v(r+1); 
     v[0].push_back({1}); 
     for(int i=1;i<=r;i++)
     {
         vector<int>vv ; 
         vv.push_back(1); 
         for (int j=0;j+1<v[i-1].size();j++)
         {
             vv.push_back(v[i-1][j]+v[i-1][j+1]); 
         }
         vv.push_back(1); 
         v[i]=vv ;
     } 
    
     return v[r]; 
    }
};