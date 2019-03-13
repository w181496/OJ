class Solution {
public:
    int largestSumAfterKNegations(vector<int>& A, int K) {
        int sum = 0, mn = 1e8;
        sort(A.begin(), A.end());
        for(int i = 0; i < A.size(); ++i) {
            if(A[i] < 0 && K) {
                A[i] *= -1;
                K--;
            }
            sum += A[i];
            mn = min(mn, A[i]);
        }
        if(K & 1) {
            sum = sum - 2 * mn;   
        }
        return sum;
    }
};
