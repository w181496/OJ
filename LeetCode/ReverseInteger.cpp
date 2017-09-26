class Solution {
    public:
        int reverse(int x) {
            int sign;
            if(x > 0) sign = 1;
            else sign = -1;
            x *= sign;
            long long int ans = 0;
            bool overflow = false;
            while(x > 0) {
                ans = ans * 10 + x % 10;
                x /= 10;
                if(ans > 2147483647) return 0;
            }
            return (int)(sign * ans);
        }
};
