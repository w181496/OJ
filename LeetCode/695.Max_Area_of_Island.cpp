// 跟Number of Islands那題幾乎一模一樣，改成算面積而已
class Solution {
    public:
        int maxAreaOfIsland(vector<vector<int>>& grid) {
            int ans = 0, tmp;
            for(int i = 0; i < grid.size(); ++i)
                for(int j = 0; j < grid[i].size(); ++j)
                    if(grid[i][j] == 1) {
                        tmp = dfs(grid, i, j);
                        if(tmp > ans) ans = tmp;
                    }
            return ans;
        }

        int dfs(vector<vector<int>>& grid, int x, int y) {
            if(x < 0 || y < 0 || x >= grid.size() || y >= grid[x].size()) return 0;
            if(grid[x][y] == 0) return 0;
            grid[x][y] = 0;
            return dfs(grid, x - 1, y) + dfs(grid, x + 1, y) + dfs(grid, x , y - 1) + dfs(grid, x, y + 1) + 1;
        }
};
