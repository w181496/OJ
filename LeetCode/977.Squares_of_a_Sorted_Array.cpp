// O(nlogn)
/*
class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        for(int i = 0; i < A.size(); ++i)
            A[i] *= A[i];
        sort(A.begin(), A.end());
        return A;
    }
};
*/


// O(n)
// two pointer
// two case: 1. >0 2. <0
class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        int id1 = -1, id2;
        vector<int>ans;
        for(int i = 0; i < A.size(); ++i) 
            if(A[i] >= 0 && id1 < 0) {
                id1 = i - 1;
                id2 = i;
                A[i] *= A[i];
            } else {
                A[i] *= A[i];   
            }
        if(id1 == -1) {
            id2 = A.size() - 1;
            while(id2 >= 0) ans.push_back(A[id2--]);
            return ans;
        }
        while(id1 >= 0 && id2 < A.size()) {
            if(A[id1] > A[id2]) {
                ans.push_back(A[id2]);
                id2++;
            } else {
                ans.push_back(A[id1]);
                id1--;
            }
        }
        while(id1 >= 0) ans.push_back(A[id1--]);
        while(id2 < A.size()) ans.push_back(A[id2++]);
        return ans;
    }
};
