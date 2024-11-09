using ll = long long;
class Solution {
public:
    long long minEnd(int n, int x) {
        ll ans = x;
        ll re = n-1;
        ll i = 0;
        while(re) {
            while(ans & (1LL<<i)) i++; 
            // cout << i << " ";
            ans |= ((re&1)<<i);
            i++;
            // cout << ((re&1)<<i) << " ";
            re >>= 1;
        }
        return ans;
    }
};