class Solution {
    public:
        bool isPowerOfTwo(int n) {
            bool flag = false;
            while(n > 0) {
                if(flag && n & 1) return false;
                if(n & 1) flag = true;
                n >>= 1;
            }
            if(flag) return true;
            return false;
        }
};
