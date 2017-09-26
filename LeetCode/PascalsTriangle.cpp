class Solution {
    public:
        vector<vector<int>> generate(int numRows) {
            vector<vector<int> > ans(numRows);
            for(int i = 0; i < numRows; ++i) {
                ans[i].push_back(1);
                for(int j = 1; j < i; ++j) {
                    ans[i].push_back(ans[i - 1][j - 1] + ans[i - 1][j]);
                }
                if(i != 0)
                    ans[i].push_back(1);
            }
            return ans;
        }
};
