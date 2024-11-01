class Solution {
public:
    string makeFancyString(string s) {
     string ans =""; 
     for (auto i: s)
     {
         if (ans.size()<2)
             ans+=i; 
         else if ((i!=ans[ans.size()-1]||ans[ans.size()-2]!=i))
             ans+=i; 
     }
      return ans; 
    }
};