class Solution {
public:
    bool makeEqual(vector<string>& words) {
        map<char,int>mp; 
        for (auto i : words)
        {
            for (auto j :i )
                mp[j]++;
        }
        for (auto i : mp)
        {
            if (i.second%words.size())
                return false; 
        }
        return true; 
    }
};