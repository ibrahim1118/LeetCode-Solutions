class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
       unordered_map<string ,int>mp; 
       for (auto i : arr1)
       {
           string a = to_string(i); 
           string x=""; 
           for (auto j: a)
           {
               x+=j; 
               mp[x]++; 
           }
               
       }
        
       int ans =0; 
      for (auto i : arr2)
       {
           string a = to_string(i); 
           string x=""; 
           for (auto j: a)
           {
               x+=j; 
               if (mp[x]>0)
               {
                   int s = x.size(); 
                   ans =max(ans , s);
               }
           }
               
       }
       return ans ; 
    }
};