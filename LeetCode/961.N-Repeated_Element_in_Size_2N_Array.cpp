class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        unordered_map<int,int>m;
        for(int i = 0; i < A.size(); ++i) {
            if(m.count(A[i])) return A[i];
            else m[A[i]]++;
        }
        return -1;
    }
};
