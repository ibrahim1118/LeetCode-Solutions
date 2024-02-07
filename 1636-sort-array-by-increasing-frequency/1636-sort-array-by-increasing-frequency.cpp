class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int>mp; 
        for (auto i : nums)
            mp[i]++;
        vector<pair<int,int>>v; 
        for (auto i : mp)
        {
            v.push_back({i.second , i.first*-1}); 
        }
        sort(v.begin() , v.end()); 
        vector<int>ans; 
        for (auto i : v)
        {
            while(i.first--)
                ans.push_back(i.second*-1); 
        }
     return ans; 
    }
};