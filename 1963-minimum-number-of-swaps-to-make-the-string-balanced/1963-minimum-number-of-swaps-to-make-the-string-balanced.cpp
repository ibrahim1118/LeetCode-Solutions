class Solution {
public:
    int minSwaps(string s) {
      stack<char>st; 
      int ans =0; 
      for (auto i : s)
      {
          if (i=='[')
              st.push(i); 
          else 
          {
              if (!st.empty())
                  st.pop(); 
              else 
                  ans++; 
          }
      }
        return (ans+1)/2; 
    }
};