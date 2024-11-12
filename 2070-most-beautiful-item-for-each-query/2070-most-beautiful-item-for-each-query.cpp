class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& v, vector<int>& queries) {
         
       
        sort(v.begin(),v.end()); 
        int mx =v[0][1]; 
        for (int i=1;i<v.size();i++)
        {
            v[i][1]= max(mx , v[i][1]); 
            mx =  v[i][1]; 
        }
        vector<int>ans; 
        for (auto i: queries)
        {
            int l=0 , r =v.size()-1; 
            int x=0; 
            while(l<=r)
            {
                int mid = (l+r)/2; 
                if (v[mid][0]<=i)
                {
                    x = max(x , v[mid][1]); 
                    l = mid+1;
                }
                else 
                    r =mid-1;
            }
            ans.push_back(x); 
        }
       return ans;           
    }
};