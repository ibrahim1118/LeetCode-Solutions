class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
      map<int,int>mp; 
      for (int i =0;i<arr.size();i++)
      {
          mp[arr[i]] = i+1 ; 
      }
      for (int i =0;i<arr.size();i++)
      {
         if (mp[2*arr[i]]>0&& mp[2*arr[i]]!=i+1) 
            return true;           
      }

      return false; 
    }
};