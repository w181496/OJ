class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n, vector<int>(n, 0));
        int dir = 0;
        int x = 0, y = 0;
        int cnt = 1;
        if(n == 0) return vector<vector<int>>();
        ans[y][x] = cnt++;
        for(int i = 1; i < n * n; ++i) {
            bool flag = true;
            int chk = 0;
            while(flag) {
                if(dir == 0) {
                    if(x + 1 < n && ans[y][x + 1] == 0) {
                        flag = false;
                        ans[y][x + 1] = cnt++;
                        x++;
                        break;
                    } else {
                        dir = 1;
                    }
                }
                if(dir == 1) {
                    if(y + 1 < n && ans[y + 1][x] == 0) {
                        flag = false;
                        ans[y + 1][x] = cnt++;
                        y++;
                        break;
                    } else {
                        dir = 2;   
                    }
                }
                if(dir == 2) {
                    if(x - 1 >= 0 && ans[y][x - 1] == 0) {
                        flag = false;
                        ans[y][x - 1] = cnt++;
                        x--;
                        break;
                    } else {
                        dir = 3;   
                    }
                }
                if(dir == 3) {
                    if(y - 1 >= 0 && ans[y - 1][x] == 0) {
                        flag = false;
                        ans[y - 1][x] = cnt++;
                        y--;
                        break;
                    } else {
                        dir = 0;    
                    }
                }
                
            }
        }
        return ans;
    }
};
