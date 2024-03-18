class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        vector<pair<int,int>>p(points.size()); 
        for (int i=0;i<points.size();i++)
        {
           p[i].first = points[i][0];
            p[i].second = points[i][1]; 
        }
        sort(p.begin(),p.end()); 
        int k = p[0].second; 
        int ans =1; 
        for (auto i:p)
        {
            if (i.first>k)
            {
                ans++; 
                k=i.second; 
            }
            else 
            {
                k = min(k,i.second); 
            }
        }
        return ans; 
    }
};