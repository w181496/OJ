class Solution {
    public:
        int countPrimes(int n) {
            if(n <= 2) return 0;
            int cnt = 1;
            for(int i = 3; i < n; ++i) {
                bool flag = false;
                for(int j = 3; j * j <= i; j += 2) {
                    if(i % j == 0) {
                        flag = true;
                        break;
                    }
                }
                if(!flag && i & 1) cnt++;
            }
            return cnt;
        }
};
