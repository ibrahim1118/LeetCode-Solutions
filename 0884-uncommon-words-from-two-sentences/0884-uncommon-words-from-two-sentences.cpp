class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
     unordered_map<string,int>mp ; 
     string s ="" ; 
        for (auto i: s1)
        {
            if (i==' ')
            {
                mp[s]++; 
                s=""; 
            }
            else 
                s+=i; 
        }
        mp[s]++; 
        s = ""; 
        for (auto i: s2)
        {
            if (i==' ')
            {
                mp[s]++; 
                s=""; 
            }
            else 
                s+=i; 
        }
        mp[s]++; 
        s = ""; 
        vector<string>ans ; 
        for(auto i: mp)
        {
            if(i.second==1)
                ans.push_back(i.first); 
        }
        
        return ans; 
    }
};