class Solution {
public:
    string reverseParentheses(string s) {
      stack<char>st ; 
      for (auto i : s)
      {
          if (i!=')')
              st.push(i); 
          else 
          {
              string x =""; 
              while(st.top()!='(')
              {
                  x+=st.top(); 
                  st.pop(); 
              }
              st.pop(); 
              for (auto j : x)
                  st.push(j); 
          }
      }
        string ans =""; 
      while(!st.empty())
      {
          ans+=st.top(); 
          st.pop(); 
      }
      reverse(ans.begin() , ans.end()); 
      return ans; 
    }
};