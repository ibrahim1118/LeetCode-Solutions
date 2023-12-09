class Solution {
public:
    int maxDepth(string s) {
        int ans =0; 
        stack<char>st; 
        for (auto i : s)
        {
            if (i=='(')
            {
                st.push(i); 
                int x = st.size(); 
                ans = max(ans , x); 
            }
            else if (i==')')
                st.pop(); 
                
        }
        return ans;
    }
};