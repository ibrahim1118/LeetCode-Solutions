class Solution {
public:
    int maximumLength(string s) {
       map<string, int>mp; 
       set<char>st;
       string ss; 
        for (int l=1;l<=s.size();l++)
        {
            for (int i=0 , j = i+l-1;j<s.size();j++ , i++)
            {
                 ss= ""; 
                st.clear(); 
                for (int x =i;x<=j;x++)
                {
                    ss+=s[x]; 
                    st.insert(s[x]); 
                }
                if (st.size()==1)
                    mp[ss]++; 
            }
        }
        int ans= -1; 
        for (auto i: mp)
        {
            if (i.second>=3)
            {
                int a = i.first.size(); 
                ans = max(ans, a); 
            }
        }
        return ans; 
    }
};