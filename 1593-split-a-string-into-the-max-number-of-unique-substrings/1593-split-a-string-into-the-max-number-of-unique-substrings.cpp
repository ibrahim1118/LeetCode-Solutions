class Solution {
public:
    unordered_set<string>st;
    int ans=0;
    int maxUniqueSplit(string s) {
        solve(0,s);
        return ans;
    }
    void solve(int i , string s)
    {
        if(st.size()>ans) 
            ans=st.size();
        if(i>=s.length()) return;
        string str="";
        for(int j=i ; j<s.length() ; j++)
        {
            str += s[j];
            if(st.find(str)==st.end())
            {
                st.insert(str);
                solve(j+1,s);
                st.erase(str);
            }
        }
    }
};