class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int p1 = 0;
        if(A.size() == 0) return A;
        while(p1 < A.size() && A[p1] % 2 == 0) p1++;
        for(int i = p1 + 1; i < A.size() && p1 < A.size(); ++i) {
            if(A[i] % 2 == 0) {
                swap(A[i], A[p1]);
                p1++;
            }
        }
        return A;
    }
};
