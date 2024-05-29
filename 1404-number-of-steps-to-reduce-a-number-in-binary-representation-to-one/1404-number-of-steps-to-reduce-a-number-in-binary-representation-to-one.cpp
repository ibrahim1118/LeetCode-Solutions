class Solution {
public:
    int numSteps(string s) {
      int ans =0; 
     reverse(s.begin() , s.end()); 
      while(true)
      {
          bool ok = true; 
          cout<<s<<endl; 
          for (int i=1;i<s.size();i++)
          {
              if (s[i]=='1')
              {
                  ok =false; 
                  break; 
              }
          }
          if (ok)
              break; 
          if (s[0]=='0')
          {
              for (int i=0;i<s.size()-1;i++)
              {
                  s[i]=s[i+1]; 
              }
              s[s.size()-1]= '0'; 
          }
          else 
          {
             int ind =-1; 
             for (int i =0;i<s.size();i++)
             {
                 if (s[i]=='0')
                 {
                     ind =i; 
                     break; 
                 }
             }
              if (ind==-1)
              {
                  for (auto &i: s)
                       i='0'; 
                  s+='1'; 
              }
              else {
              s[ind] ='1';
             for (int i=0;i<ind;i++)
                 s[i]='0';} 
          }
          ans++; 
      }
        return ans; 
    }
};