class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        int p1 = 0, p2 = 1;
        vector<int>ans = A;
        for(int i = 0; i < A.size(); ++i) {
            if(A[i] & 1) {
                ans[p2] = A[i];
                p2 += 2;
            } else {
                ans[p1] = A[i];
                p1 += 2;
            }
        }
        return ans;
    }
};
