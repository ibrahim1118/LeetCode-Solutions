class Solution {
public:
    bool isUgly(int n) {
        if (n<=0)
            return false; 
        vector<int>pr = primeFactors(n); 
        for (auto i : pr)
        {
            if (!(i==2||i==3||i==5))
                return false; 
        }
        return true;
    }
    vector<int> primeFactors(int  n) {

    vector<int> factors;
    for (long long  i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n >= 2)
        factors.push_back(n);

    return factors;
}
};