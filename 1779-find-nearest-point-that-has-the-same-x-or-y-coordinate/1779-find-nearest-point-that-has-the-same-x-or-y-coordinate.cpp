class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& p) {
       int d =1e9; 
       int ans =-1; 
       for (int i=0;i<p.size();i++)
       {
           if (x==p[i][0]||y==p[i][1])
           {
               if (abs(x- p[i][0])+abs(y-p[i][1])<d)
               {
                   d =abs(x- p[i][0])+abs(y-p[i][1]);
                   ans=i; 
               }
           }
       }
       return ans; 
    }
};