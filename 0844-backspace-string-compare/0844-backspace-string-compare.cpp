class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st ,st2; 
        for (auto i : s)
        {
            if (i=='#'&&!st.empty())
                st.pop(); 
            else if (i!='#')
                st.push(i); 
        }
       for (auto i : t)
        {
            if (i=='#'&&!st2.empty())
                st2.pop(); 
            else if (i!='#') 
                st2.push(i); 
        }
        string a ="" ,b=""; 
        while(!st.empty())
        { a+=st.top(); 
         st.pop(); 
         }
         while(!st2.empty())
        { b+=st2.top(); 
         st2.pop(); 
         }
        return a==b; 
    }
};