class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
       vector<int>fre(k+2); 
       for (auto i: arr)
       {
           int mode = ((i%k) +k)%k; 
           fre[mode]++; 
       }
     for (int i =1;i<k;i++)
     {
         if (i==k-i)
         {
             if (fre[i]%2)
                  return false; 
         }
         else if (fre[i]!=fre[k-i])
             return false; 
     }
        return true; 
    }
};