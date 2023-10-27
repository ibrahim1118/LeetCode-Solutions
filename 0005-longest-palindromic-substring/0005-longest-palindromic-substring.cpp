class Solution {
public:
    string ans =""; 
    string longestPalindrome(string s) {
       int st=0 , maxL =1; 
    if (s.size()==1)
        return s; 
     for (int i=0;i<s.size();i++)
     {
         int l = i-1 ,r =i; 
         while(l>=0&&r<s.size()&&s[l]==s[r])
         {
             if (r-l+1>maxL)
             {
                 maxL = r-l+1; 
                 st = l; 
             }
             l--,r++; 
         }
         l = i-1 , r=i+1;
          while(l>=0&&r<s.size()&&s[l]==s[r])
         {
             if (r-l+1>maxL)
             {
                 maxL = r-l+1; 
                 st = l; 
             }
             l--,r++; 
         }
     }
        
    string ans =""; 
        cout<<st ;
    for (int i =st ;i<st+maxL;i++)
        ans+=s[i]; 
    return ans; 
    }
    
};