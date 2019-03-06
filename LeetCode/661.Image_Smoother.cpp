class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
        vector<vector<int> > ans = M;
        for(int i = 0; i < M.size(); ++i) {
            for(int j = 0; j < M[i].size(); ++j) {
                int sum = 0, cnt = 0;
                sum += M[i][j];
                cnt++;
                if(j > 0 && i > 0) sum += M[i - 1][j - 1], cnt++;
                if(j > 0) sum += M[i][j - 1], cnt++;
                if(i > 0) sum += M[i - 1][j], cnt++;
                if(j < M[i].size() - 1) sum += M[i][j + 1], cnt++;
                if(j < M[i].size() - 1 && i > 0) sum += M[i -1][j + 1], cnt++;
                if(j > 0 && i < M.size() - 1) sum += M[i + 1][j - 1], cnt++;
                if(i < M.size() - 1) sum += M[i + 1][j], cnt++;
                if(i < M.size() -1 && j < M[i].size() -1) sum += M[i + 1][j + 1], cnt++;
                ans[i][j] = sum / cnt;
            }
        }
        return ans;
    }
};
