class Solution {
public:
    int minimizeSet(int d1, int d2, int u1, int u2) {
        long long d =d1 , dd = d2;
        long long  lcm  = (dd*d)/__gcd(d , dd); 
        long long tt =u2+u1; 
        long long  ma =1e11; 
        long long l =1 , r = 2e9+9; 
        int t =100; 
        while(t--)
        {
           long long mid = (l + r) / 2;
            long long both = mid / lcm;
            long long onlyA = mid / d2 - both;
            long long onlyB = mid / d1 - both;
            tt = max(0ll, u1 - onlyA) + max(0ll, u2 - onlyB);
            if (mid - onlyA - onlyB >= tt + both)
            {
                ma = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        
        return ma ;
    }
};