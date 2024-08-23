class Solution {
public:
    string fractionAddition(string expression) {
        int p = 0, m = 1;
        int i = 0, n = expression.size();

        while (i < n) {
            int sign = 1;
            if (expression[i] == '+' || expression[i] == '-') {
                if (expression[i] == '-') sign = -1;
                i++;
            }

            int num = 0;
            while (i < n && isdigit(expression[i])) {
                num = num * 10 + (expression[i] - '0');
                i++;
            }
            num *= sign;

            i++;

            int den = 0;
            while (i < n && isdigit(expression[i])) {
                den = den * 10 + (expression[i] - '0');
                i++;
            }

            p = p * den + num * m;
            m *= den;

            int gc = gcd(abs(p), m);
            p /= gc;
            m /= gc;
        }

        return to_string(p) + "/" + to_string(m);
    }
};