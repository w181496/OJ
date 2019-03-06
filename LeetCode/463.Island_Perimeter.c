// 檢查每格為1的上下左右，如果是0或邊界，答案就+1
int islandPerimeter(int** grid, int gridRowSize, int gridColSize) {
    int ans = 0;
    for(int i = 0; i < gridColSize; ++i) {
        for(int j = 0; j < gridRowSize; ++j) {
            if(!grid[j][i]) continue;
            if(i - 1 < 0) ans++;
            else if(grid[j][i - 1] == 0) ans++;
            if(i + 1 >= gridColSize) ans++;
            else if(grid[j][i + 1] == 0) ans++;
            if(j - 1 < 0) ans++;
            else if(grid[j - 1][i] == 0) ans++;
            if(j + 1 >= gridRowSize) ans++;
            else if(grid[j + 1][i] == 0) ans++;
        }
    }
    return ans;
}
