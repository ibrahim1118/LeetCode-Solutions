class Solution {
public:
    int minimizeXor(int num1, int num2) {
       bitset<32> n2 = num2 , n1 = num1; 
       int ans =0 ; 
       int x = n2.count();
       for (int i=32;i>=0;i--)
       {
            if (n1[i]==1&&x)
            {
                ans+=1<<i;
                x--; 
            }
       }
      for (int i=0;i<32;i++)
       {
            if (n1[i]==0&&x)
            {
                ans+=1<<i;
                x--; 
            }
       }
       return ans ;  
    }
};