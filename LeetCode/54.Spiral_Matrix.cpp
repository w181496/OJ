// 純模擬...
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        if(matrix.empty()) return ans;
        vector<vector<bool>>check(matrix.size(), vector<bool>(matrix[0].size(), false));
        int x = 0, y = 0;
        int dir = 0; // 0:right, 1:down, 2:left, 3:up
        bool flag = true;
        while(flag) {
            ans.push_back(matrix[y][x]);
            check[y][x] = true;
            int cnt = 0;
            while(true) {
                if(dir == 0) {
                    if(x + 1 < matrix[y].size() && !check[y][x + 1]) {
                        x++;
                        break;
                    } else {
                        dir = 1;   
                        cnt++;
                    }
                }
                if(dir == 1) {
                    if(y + 1 < matrix.size() && !check[y + 1][x]) {
                        y++;
                        break;
                    } else {
                        dir = 2;   
                        cnt++;
                    }
                }
                if(dir == 2) {
                    if(x - 1 >= 0 && !check[y][x - 1]) {
                        x--;   
                        break;
                    } else {
                        dir = 3;   
                        cnt++;
                    }
                }
                if(dir == 3) {
                    if(y - 1 >= 0 && !check[y - 1][x]) {
                        y--;   
                        break;
                    } else {
                        dir = 0;
                        cnt++;
                    }
                }
                if(cnt >= 4) {
                    flag = false;
                    break;
                }
            }
        }
        return ans;
    }
};
