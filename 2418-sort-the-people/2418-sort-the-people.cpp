class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n  = names.size();
        vector<pair<int,string>>v(n); 
        for (int i =0;i<names.size();i++)
        {
            v[i] = {heights[i]*-1 ,names[i]}; 
        }
        sort(v.begin() , v.end());
        for (int i=0;i<n;i++)
        {
            names[i] = v[i].second;  
        }
        return names; 
    }
};