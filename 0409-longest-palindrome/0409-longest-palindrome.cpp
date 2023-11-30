class Solution {
public:
    int longestPalindrome(string s) {
       map<char,int>mp; 
        for (auto i : s)
              mp[i]++;
        int mx =0; 
        int ans =0; 
        for (auto i : mp)
        {
            if (i.second%2)
            { ans+=i.second-1 ; mx++;} 
            else 
                ans+=i.second; 
        }
        if (mx)
            ans++;
        return ans; 
    }
};