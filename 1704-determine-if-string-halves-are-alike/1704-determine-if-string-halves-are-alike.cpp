class Solution {
public:
    bool halvesAreAlike(string s) {
        set<char>st ; 
        st.insert('a'); 
        st.insert('e'); 
        st.insert('i'); 
        st.insert('u'); 
        st.insert('o'); 
        st.insert('A'); 
        st.insert('E'); 
        st.insert('I'); 
        st.insert('O'); 
        st.insert('U'); 
        int a =0 ,b =0; 
        for (int i=0;i<s.size()/2;i++)
        {
            if (st.count(s[i]))
                a++; 
        }
        for (int i=s.size()/2;i<s.size();i++)
        {
            if (st.count(s[i]))
                b++; 
        }
        return a==b; 
    }
};