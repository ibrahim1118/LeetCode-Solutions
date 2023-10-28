class Solution {
    public:
    int countVowelPermutation(int n) 
    {
        long a=1,e=1,i=1,o=1,u=1,mod = 1e9 + 7;
        long a1,e1,i1,o1,u1;
        for(int j=2;j<=n;j++)
        {
            a1=(e)%mod;
            e1=(a+i)%mod;
            i1=(a+u+e+o)%mod;
            o1=(i+u)%mod;
            u1=(a)%mod;
            a=a1;
            e=e1;
            i=i1;
            o=o1;
            u=u1;
        }
        long ans = (a + e + i + o + u) % mod;
        return (int) ans;
    }
};