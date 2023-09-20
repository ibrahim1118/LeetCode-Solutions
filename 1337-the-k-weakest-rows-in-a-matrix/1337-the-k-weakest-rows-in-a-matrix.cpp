class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>>v; 
        for (int i=0;i<mat.size();i++)
        {
            int a =0; 
            for (int j=0;j<mat[i].size();j++)
            {
                    if (mat[i][j]==1)
                         a++; 
            }
            v.push_back({a , i}); 
        }
        
        sort(v.begin(), v.end());
         for (auto i :v)
        cout <<i.first<<" "<<i.second<<endl;
        vector<int>ans;  
        for (int i =0;i<k;i++)
        ans.push_back(v[i].second); 
        return ans; 
    }
};