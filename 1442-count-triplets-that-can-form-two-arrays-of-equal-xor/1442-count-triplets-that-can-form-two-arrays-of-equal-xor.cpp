class Solution {
public:
    int countTriplets(vector<int>& arr) {
      int ans =0; 
       for (int i=0;i<arr.size();i++)
       {
           int curr = arr[i]; 
           for (int  j=i+1;j<arr.size();j++)
           {
               curr^=arr[j]; 
               if (curr==0)
                   ans+=j-i; 
           }
       }
        return ans; 
    }
};