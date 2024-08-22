class Solution {
public:
    int findComplement(int num) {
     
      int f =0 ; 
      bitset<32> n = num; 
      for (int i=31;i>=0;i--)
      {
          if (n[i]==1)
              f++;
          if (f)
           n[i] = !n[i];  
      }
      return num = n.to_ulong(); 
          
    }
};