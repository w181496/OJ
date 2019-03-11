// Hash
class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        map<int, int>m, m2;
        int ans = 0;
        for(int i = 0; i < A.size(); ++i)
            for(int j = 0; j < B.size(); ++j)
                if(!m.count(A[i] + B[j])) m[A[i] + B[j]] = 1;
                else m[A[i] + B[j]]++;
        for(int i = 0; i < C.size(); ++i) {
            for(int j = 0; j < D.size(); ++j) {
                int target = -1 * (C[i] + D[j]);
                if(m.count(target)) ans += m[target];
            }
        }
        return ans;
    }
};
