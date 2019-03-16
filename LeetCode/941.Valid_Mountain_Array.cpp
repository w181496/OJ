class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        if(A.size() < 3) return false;
        int prev = A[0];
        bool flag = false;
        for(int i = 1; i < A.size(); ++i) {
            if(A[i] > A[i - 1]) {
                if(flag) return false;
            } else if(A[i] < A[i - 1]) {
                if(i == 1) return false;
                flag = true;
            } else {
                return false;
            }
        }
        if(!flag) return false;
        return true;
    }
};
