class Solution {
    public:
        int trailingZeroes(int n) {
            long long int ans = 0;
            long long int tmp = 5;
            while(n >= tmp) {
                ans += n / tmp;
                tmp *= 5;
            }
            return ans;
        }
};
