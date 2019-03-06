class Solution {
    public:
        double myPow(double x, int n) {
            double r = 1.0, base = x;
            long long int p = n;
            if(x == 1.0 || n == 0) return 1.0;
            if(n < 0) p = -n, x = 1.0 / x;
            while(p != 0) { 
                if(p & 1) r *= x;
                x *= x;
                p /= 2;
            }
            return r;
        }
};
