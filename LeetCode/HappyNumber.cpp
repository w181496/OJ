class Solution {
    public:
        bool isHappy(int n) {
            int tmp;
            do {
                tmp = 0;
                while(n > 0) {
                    tmp += (n % 10) * (n % 10);
                    n /= 10;
                }
                n = tmp;
            } while(tmp != 1 && tmp != 4);
            if(tmp == 1) return true;
            return false;
        }
};
