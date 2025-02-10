class Solution {
public:
    string clearDigits(string s) {
        stack<char>st ; 
        for (auto i: s)
        {
            if (i>='0'&&i<='9')
            {
                if (st.size())
                     st.pop(); 
                
            }
            else 
                st.push(i); 
        }
        s = ""; 
        while(!st.empty())
        {
            s+=st.top(); 
            st.pop(); 
        }
        reverse(s.begin() , s.end());
        return s; 
    }
};