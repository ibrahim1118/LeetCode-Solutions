class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& q) {
        
         for (int i=1;i<arr.size();i++)
         {
             arr[i]^=arr[i-1]; 
         }
         vector<int>ans(q.size()); 
        for (int i=0;i<q.size();i++)
        {
            int l = q[i][0] , r = q[i][1]; 
            if (l)
                ans[i] = arr[r]^arr[l-1]; 
            else 
                ans[i] = arr[r]; 
        }
        
        return ans;         
    }
};