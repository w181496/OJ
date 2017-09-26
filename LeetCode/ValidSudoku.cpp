class Solution {
    public:
        bool isValidSudoku(vector<vector<char>>& board) {
            bool chk[11];
            for(int i = 0; i < 9; ++i) {
                for(int j = 0; j < 11; ++j) chk[j] = false;
                for(int j = 0; j < 9; ++j) {
                    if(board[i][j] != '.') {
                        if(chk[board[i][j] - '0'] == true) return false;
                        chk[board[i][j] - '0'] = true; 
                    }
                }
                for(int j = 0; j < 11; ++j) chk[j] = false;
                for(int j = 0; j < 9; ++j) {
                    if(board[j][i] != '.') {
                        if(chk[board[j][i] - '0'] == true) return false;
                        chk[board[j][i] - '0'] = true; 
                    }
                }
            }
            for(int i = 0; i < 3; ++i) {
                for(int j = 0; j < 3; ++j) {
                    for(int j = 0; j < 11; ++j) chk[j] = false;
                    for(int a = 0; a < 3; ++a) {
                        for(int b = 0; b < 3; ++b) {
                            if(board[3 * i + a][3 * j + b] != '.') {
                                if(chk[board[3 * i + a][3 * j + b] - '0'] == true) return false;
                                chk[board[3 * i + a][3 * j + b] - '0'] = true;
                            }
                        }
                    }
                }
            }
            return true;
        }
};
