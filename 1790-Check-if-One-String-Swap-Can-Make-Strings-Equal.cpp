class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
         int ans =0; 
         for (int i=0;i<s1.size();i++)
         {
             if (s1[i]!=s2[i])
                 ans++; 
         }
         sort(s1.begin() , s1.end());
       sort(s2.begin() , s2.end());
        if (s1!=s2)
            return false; 

         return ans==0||ans==2;
    }
};