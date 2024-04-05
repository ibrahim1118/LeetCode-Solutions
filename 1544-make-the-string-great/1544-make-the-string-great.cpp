class Solution {
public:
    string makeGood(string s) {
      stack<char>st; 
      for (auto i : s)
      {
          if (st.empty())
              st.push(i); 
          else if (islower(i)&&isupper(st.top())&& tolower(i)== tolower(st.top()) )
              st.pop(); 
          else if (islower(st.top())&&isupper(i)&& tolower(i)== tolower(st.top()))
              st.pop(); 
          else 
              st.push(i); 
      }
        string ans =""; 
        while(!st.empty())
        {ans+=st.top();
         st.pop();
        }
         reverse(ans.begin() , ans.end());
        return ans;
    
    }
};