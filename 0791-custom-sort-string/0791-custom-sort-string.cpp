class Solution {
public:
    string customSortString(string order, string s) {
        vector<int>fre(26);
        vector<int>v(26);
        for (auto i : s)
              fre[i-'a']++; 
        string ans =""; 
        for (auto i : order)
        {  v[i-'a']++; 
            while(fre[i-'a']>0)
            { ans+=i;
              fre[i-'a']--;
            } 
        }
        for (auto i : s)
            if (!v[i-'a'])
                ans+=i; 
        return ans; 
    }
};