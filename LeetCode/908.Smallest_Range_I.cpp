// 看最大和最小就行
class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        int avg = 0, mn = 1e8, mx = -1e8;
        for(int i = 0; i < A.size(); ++i) {
            mn = min(mn, A[i]);
            mx = max(mx, A[i]);
        }
        avg = (mx + mn) / 2;
        if(abs(avg - mn) > K) mn += K;
        else mn = avg;
        if(abs(mx - avg) > K) mx -= K;
        else mx = avg;
        return mx - mn;
    }
};
