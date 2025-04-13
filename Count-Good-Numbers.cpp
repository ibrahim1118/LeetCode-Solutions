class Solution {
public:
   long long mod = 1e9+7;
    int countGoodNumbers(long long n) {
       long long even = 5 , odd = 4; 
       long long  evenind = (n+1)/2;
       long long oddind = (n)/2; 
       long long x =fst_pow(5 , evenind);
       x%=mod; 
       long long y = fst_pow(4 ,oddind) ;
       int ans= ((x%mod)*(y%mod))%mod; 
       return ans; 
    }
    long long fst_pow(long long a, long long N) {
    if (N == 0) return 1;
    long long R = fst_pow(a, N / 2);
    if (N % 2) return ((R * R) % mod * a) % mod;
    else return (R * R) % mod;
  }
};