class Solution {
public:
    int titleToNumber(string c) {
      int ans =0; 
      for (int i=0;i<c.size();i++)
      {
          
          ans+= pow(26,c.size()-(i+1))*(c[i]-'A'+1); 
      }
      return ans; 
    }
};