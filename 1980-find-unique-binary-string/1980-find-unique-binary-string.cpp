class Solution {
public:
    set<string>st; 
    string ans ="";
    string findDifferentBinaryString(vector<string>& nums) {
        for (auto i : nums)
            st.insert(i); 
        int n = nums.size(); 
        solve(n , ""); 
        return ans; 
    }
    void solve(int n , string sub)
    {
        if (sub.size()==n)
        {
            int a = st.size(); 
            st.insert(sub);
            if (st.size()>a)
                ans= sub; 
            return; 
        }
        if (ans!="")
            return; 
        solve(n , sub+'0'); 
        solve(n , sub+'1'); 
    }
    
};