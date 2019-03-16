// space: O(n)
// time: O(n)
class Solution {
public:
    int partitionDisjoint(vector<int>& A) {
        int lmax, rmin;
        vector<int>minarr(A.size());
        if(A.empty()) return 0;
        
        lmax = A[0];
        rmin = 1e8;
        
        // find right half min value
        for(int i = A.size() - 1; i >= 0; --i) {
            rmin = min(rmin, A[i]);
            minarr[i] = rmin;
        }
        
        if(rmin >= lmax) return 1;
        for(int i = 1; i < A.size() - 1; ++i) {
            lmax = max(lmax, A[i]);
            if(minarr[i + 1] >= lmax) return i + 1;
        }
        return 0;
    }
};
