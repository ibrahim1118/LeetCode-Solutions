class Solution {
public:
    string freqAlphabets(string s) {
      string ans = ""; 
      string a =""; 
      for (auto i : s)
      {
          if (i!='#')
              a+=i; 
          else 
          {
              cout<<a<<" "; 
              for (int j=0;j<a.size()-2;j++)
              {
                  int b = int(a[j]-'0'); 
                  ans+=char('a'+b-1); 
              }
              int b = int(a[a.size()-2]-'0')*10;
              b+=int(a[a.size()-1]-'0'); 
              ans+=char('a'+b-1); 
              a=""; 
          }
      }
        for (int j=0;j<a.size();j++)
              {
                  int b = int(a[j]-'0'); 
                  ans+=char('a'+b-1); 
              }
        return ans ; 
    }
};