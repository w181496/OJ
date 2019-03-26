// 二分搜
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int l = 0, r = A.size() - 1;
        while(l < r) {
            int mid = (l + r) >> 1;
            int status = check(A, mid);
            if(status == 1) return mid;
            else if(status == 0) l = mid + 1;
            else r = mid;
        }
        return l;
    }
    
    int check(vector<int>& A, int idx) {
        if(idx > 0 && idx < A.size() - 1) {
            if(A[idx] > A[idx - 1] && A[idx] > A[idx + 1]) return 1;
            else if(A[idx - 1] < A[idx] && A[idx] < A[idx + 1]) return 0;
            else if(A[idx - 1] > A[idx] && A[idx] > A[idx + 1]) return 2;
        } else if(idx > 0) {
            if(A[idx] > A[idx - 1]) return 0;
            else return 2;
        } else if(idx < A.size() - 1) {
            if(A[idx] < A[idx + 1]) return 0;
            else return 2;
        }
        return 1;
    }
};
