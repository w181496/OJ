class Solution {
    public:
        int hammingDistance(int x, int y) {
            int ans = 0;
            x ^= y;
            while(x > 0) {
                ans += (x % 2);
                x /= 2;
            }
            return ans;
        }
};
