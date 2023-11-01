class Solution {
public:
    bool isPalindrome(int x) {
      if (x<0)
         return false; 
       long long  a =x; 
       long long  rev =0; 
        while(a>0)
        {
            rev*=10; 
            rev+=a%10; 
            a/=10; 
        }
       return  rev==x;
            
    }
};