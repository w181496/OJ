class Solution {
public:
    int minDominoRotations(vector<int>& A, vector<int>& B) {
        if(A.size() != B.size()) return -1;
        if(A.size() == 1) return 0;
        int a1 = A[0], b1 = B[0], target = -1e8, ans = -1, cnt = 0;
        // find target first
        for(int i = 1; i < A.size(); ++i) {
            if((A[i] == a1 && B[i] == b1) || (A[i] == b1 && B[i] == a1)) {
                continue;
            } else {
                if(A[i] != a1 && A[i] != b1 && B[i] != a1 && B[i] != b1) return -1;
                if(A[i] == a1 || B[i] == a1) {
                    target = a1;
                    break;
                } else if(A[i] == b1 || B[i] == b1) {
                    target = b1;
                    break;
                }
            }
        }
        if(target == -1e8) target = a1; 
        
        // count up
        cnt = 0;
        for(int i = 0; i < A.size(); ++i) {
            if(A[i] != target && B[i] == target) cnt++;
            if(A[i] != target && B[i] != target) return -1;
        }
        ans = cnt;
        // count down
        cnt = 0;
        for(int i = 0; i < A.size(); ++i) {
            if(B[i] != target && A[i] == target) cnt++;
            if(A[i] != target && B[i] != target) return -1;
        }
        ans = min(ans, cnt);
        return ans;
    }
};
