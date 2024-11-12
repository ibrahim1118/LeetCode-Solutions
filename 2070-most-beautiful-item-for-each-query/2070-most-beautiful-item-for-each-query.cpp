class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        vector<pair<int,int>>v; 
        for (auto i: items)
            v.push_back({i[0], i[1]});
        sort(v.begin(),v.end()); 
        int mx =v[0].second; 
        for (int i=1;i<v.size();i++)
        {
            v[i].second= max(mx , v[i].second); 
            mx =  v[i].second; 
        }
        vector<int>ans; 
        for (auto i: queries)
        {
            int l=0 , r =v.size()-1; 
            int x=0; 
            while(l<=r)
            {
                int mid = (l+r)/2; 
                if (v[mid].first<=i)
                {
                    x = max(x , v[mid].second); 
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