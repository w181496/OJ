class Solution {
    public:
        string countAndSay(int n) {
            string ans[100010];
            ans[1] = "1";
            for(int i = 2; i <= n; i++) {
                string tmp;
                int cnt = 1;
                char now = ans[i - 1][0];
                for(int j = 1; j < ans[i - 1].size(); ++j) {
                    if(now != ans[i - 1][j]) {
                        tmp += transfer(cnt);
                        tmp += now;
                        cnt = 1;
                        now = ans[i - 1][j];
                    } else {
                        cnt++;
                    }
                }
                tmp += transfer(cnt);
                tmp += now;
                ans[i] = tmp;
            }
            return ans[n];
        }

        string transfer(int n) {
            string tmp;
            while(n > 0) {
                tmp = tmp + (char)('0' + n % 10);
                n /= 10;
            }
            return tmp;
        }
};
