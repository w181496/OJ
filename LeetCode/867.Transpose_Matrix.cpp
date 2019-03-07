// 不一定是方陣
// 直接建一個行列數互換的矩陣塞進去
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        if(A.size() == 0) return A;
        vector<vector<int>>ans(A[0].size());
        for(int i = 0; i < A[0].size(); ++i) ans[i].resize(A.size());
        for(int i = 0; i < A.size(); ++i)
            for(int j = 0; j < A[i].size(); ++j) 
                ans[j][i] = A[i][j];
        return ans;
    }
};
