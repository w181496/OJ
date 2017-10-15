class Solution {
    public:
        bool hasAlternatingBits(int n) {
            int t = n % 2;
            n >>= 1;
            while(n > 0) {
                if(t == n % 2) return false;
                t = n % 2;
                n >>= 1;
            }
            return true;
        }
};
