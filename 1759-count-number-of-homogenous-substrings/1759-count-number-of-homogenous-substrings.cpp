class Solution {
public:
    int countHomogenous(string s) {
     vector<long long >sub; 
     int l=1; 
      int mod = 1e9+7; 
     for (int i=0;i<s.size()-1;i++)
     {
         if (s[i]==s[i+1])
             l++; 
         else 
         {  
             sub.push_back(l);
              l=1; 
         } 
     }
       
    sub.push_back(l); 
     long long ans  =0; 
    for (auto i : sub)
    {
        ans+=(i*(i+1))/2; 
        ans%=mod; 
    }
      return int(ans); 
    }
};