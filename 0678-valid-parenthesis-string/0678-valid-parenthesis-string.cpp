class Solution {
public:
    bool checkValidString(string s) {
       stack<int> p , st; 
       for (int i=0;i<s.size();i++)
       {
           if (s[i]=='(')
               p.push(i); 
           else if (s[i]=='*')
               st.push(i); 
           else 
           {
               if (p.size())
                    p.pop(); 
               else if (st.size())
                   st.pop(); 
               else 
                   return false; 
                   
           }
       }
        while(!st.empty()&&!p.empty()&&st.top()>p.top())
        {
            st.pop(); 
            p.pop(); 
        }
        return p.size()==0; 
    }
};