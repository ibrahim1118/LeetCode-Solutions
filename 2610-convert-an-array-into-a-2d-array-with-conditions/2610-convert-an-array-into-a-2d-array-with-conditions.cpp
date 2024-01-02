class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
       vector<vector<int>>ans; 
       map<int,int>mp;
       for (auto i : nums)
           mp[i]++; 
        while(true)
        {
            vector<int>v; 
            int a =0; 
            for (auto &i: mp)
            {
                if (i.second>0)
                {
                    a++; 
                    i.second--; 
                    v.push_back(i.first); 
                }
            }
            if (v.size())
                ans.push_back(v);
            if (a==0)
                break; 
        }
        return ans; 
    }
};