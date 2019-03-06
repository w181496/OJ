class Solution {
    public:
        int uniquePaths(int m, int n) {
            long long int ans = 1;
            m--;
            n--;
            for(int i = max(m, n) + 1; i <= m + n; ++i)
                ans *= i;
            for(int i = 2; i <= min(m, n); ++i)
                ans /= i;
            return ans;
        }
};
