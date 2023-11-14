class Solution {
public:
    int countPalindromicSubsequence(string s) {
       int ans =0; 
       map<char,int>fir  , last; 
       for (int i=0;i<s.size();i++)
       {
            last[s[i]] =i; 
       }
       for (int i=s.size()-1;i>=0;i--)
       {
          fir[s[i]] =i;
       }
       for (char  i = 'a';i<='z';i++)
       {
           
           int f = fir[i]; 
           int l = last[i]; 
           set<char>st; 
           if (l-f>=2){
       for (int j =f+1;j<l;j++)
                   st.insert(s[j]);
             cout<<i<<" "<<f<<" "<<l<<endl;
           } 
           ans+=st.size(); 
           st.clear(); 
       }
        return ans; 
    }
};