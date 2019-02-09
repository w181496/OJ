// DP => 卡特蘭數
class Solution {
public:
    int numTrees(int n) {
        long long int c[100000] = {};
        c[0] = c[1] = 1;
        for(int i = 2; i <= n; ++i) 
            for(int j = 0; j < i; ++j)
                c[i] += c[i - j - 1] * c[j];
        return c[n];
    }
};
