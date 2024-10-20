class Solution {
public:
    bool parseBoolExpr(string ex) {
        stack<char>st; 
        bool ans = true;
        for (auto i : ex)
        {
            if (i!=')')
            {
                if (i!=',')
                    st.push(i); 
            }
            else 
            {
                vector<bool>v; 
                while(st.top()!='(')
                {
                    if (st.top()=='t')
                        v.push_back((true)); 
                    else 
                        v.push_back(false); 
                    st.pop(); 
                }
                st.pop(); 
                char a = st.top(); 
                st.pop(); 
                if (a=='!')
                {
                    if (v[0])
                        st.push('f'); 
                    else 
                        st.push('t'); 
                }
                else if (a=='|')
                {
                    bool x = false;
                    for (auto i : v)
                    {
                        x|=i; 
                    }
                    if (x)
                        st.push('t'); 
                    else 
                        st.push('f'); 
                }
                else 
                {
                     bool x = true;
                    for (auto i : v)
                    {
                        x&=i; 
                    }
                    if (x)
                        st.push('t'); 
                    else 
                        st.push('f'); 
                }
            }
        }
        if (st.top()=='t')
            return true; 
        return false; 
    }
};