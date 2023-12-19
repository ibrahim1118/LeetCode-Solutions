class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
       int n = img.size(); 
       int m = img[0].size(); 
       vector<vector<int>>ans(n , vector<int>(m)); 
       for (int i=0;i<n;i++)
       {
           for (int j=0;j<m;j++)
           {
               int a =0; 
               int nn =0; 
               for (int r =i-1;r<=i+1;r++)
               {
                   for (int c =j-1;c<=j+1;c++)
                   {
                       if (r>=0&&r<n&&c>=0&&c<m)
                       {  a+=img[r][c];
                         nn++; 
                        } 
                   }
               }
               ans[i][j]=a/nn; 
           }
       }
       return ans; 
    }
};