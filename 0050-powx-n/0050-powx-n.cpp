

class Solution {
public:
    double myPow(double x, int n) {
        long long bin = n;
        long double base = x;

        if (bin < 0) {
            base = 1.0L / base;
            bin = -bin;
        }

        long double ans = 1.0L;

        while (bin > 0) {
            if (bin % 2 == 1) {
                ans *= base;
            }

            base *= base;
            bin /= 2;
        }

        return (double)ans;
    }
};