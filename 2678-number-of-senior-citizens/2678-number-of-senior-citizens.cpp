class Solution {
public:
    int countSeniors(vector<string>& details) {
      int ans=0; 
       for (auto i: details)
       {
           string x =""; 
           x+=i[11];
               x+=i[12]; 
           cout<<x<<" "; 
          if (x>"60")
              ans++; 
       }
       return ans; 
    }
};