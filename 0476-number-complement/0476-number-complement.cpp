class Solution {
public:
    int findComplement(int num) {
     int ans =0; 
      int f =0 ; 
      bitset<32> n = num; 
      for (int i=31;i>=0;i--)
      {
          if (n[i]==1)
              f++; 
          if (n[i]==0&&f)
              ans+=pow(2 , i); 
      }
      return ans; 
          
    }
};