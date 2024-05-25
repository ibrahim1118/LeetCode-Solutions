class Solution {
public:
    vector<string>ans;
    map<string,int>mp; 
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        for (auto i : wordDict)
                 mp[i]++; 
        solve(0 , s , ""); 
        return ans;
    }
    void solve(int i  , string s  , string curr)
    {
        if (i==s.size())
        {
            ans.push_back(curr); 
            return; 
        }
        string x= ""; 
        for (int j = i;j<s.size();j++)
        {
            x+=s[j]; 
            if (mp.count(x))
            {
                if (j==s.size()-1)
                    solve(j+1 , s , curr+x); 
                else 
                    solve(j+1 , s , curr+x+" "); 
            }
        }
    }
};