class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        dfs(board, 0, 0);
    }
    
    bool dfs(vector<vector<char>>& board, int x, int y) {
        if(x == 9) return dfs(board, 0, y + 1);
        if(y == 9) return check(board);
        if(board[y][x] != '.') return dfs(board, x + 1, y);
        if(!check(board)) return false;
        for(int i = 1; i <= 9; ++i) {
            board[y][x] = (char)('0' + i);
            if(dfs(board, x + 1, y)) return true;
            board[y][x] = '.';
        }
        return false;
    }
    
    bool check(vector<vector<char>>& board) {
        for(int i = 0; i < board.size(); ++i) {
            int chk[10], chk2[10];
            for(int j = 0; j < 10; ++j) chk[j] = chk2[j] = 0;
            for(int j = 0; j < board[i].size(); ++j) {
                if(board[i][j] != '.') {
                    if(chk[board[i][j] - '0'] != 0) return false;
                    else chk[board[i][j] - '0'] = 1;
                }
                if(board[j][i] != '.') {
                    if(chk2[board[j][i] - '0'] != 0) return false;
                    else chk2[board[j][i] - '0'] = 1;
                }
            }
        }
        
        for(int i = 0; i < 3; ++i) {
            for(int j = 0; j < 3; ++j) {
                int chk[10];
                for(int k = 0; k < 10; ++k) chk[k] = 0;
                for(int k = 0; k < 3; ++k) {
                    for(int l = 0; l < 3; ++l) {
                        if(board[3 * i + k][3 * j + l] == '.') continue;
                        if(chk[board[3 * i + k][3 * j + l] - '0'] != 0) return false;
                        else chk[board[3 * i + k][3 * j + l] - '0'] = 1;
                    }
                }
            }
        }
        return true;
    }
    
};
