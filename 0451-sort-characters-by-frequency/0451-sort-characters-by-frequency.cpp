class Solution {
public:
    string frequencySort(string s) {
        map<char, int>mp; 
        for(auto i : s)
            mp[i]++; 
        string ans ="";
        vector<pair<int,char>>v; 
        for (auto i : mp)
        {
            v.push_back({i.second , i.first}); 
        }
        sort(v.rbegin() , v.rend()); 
        for (auto i : v)
        {
            while(i.first--)
                ans+= i.second; 
        }
        return ans; 
    }
};