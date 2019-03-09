// 稍微注意一下等於的狀況就行
class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        if(A.size() <= 1) return true;
        bool isInc = true, isDec = true;
        for(int i = 1; i < A.size(); ++i)
            isInc &= (A[i] >= A[i - 1]);
        for(int i = 1; i < A.size(); ++i)
            isDec &= (A[i] <= A[i - 1]);
        return isDec || isInc;
    }
};
