// 只有直的和橫的，且不會相鄰
// 掃一遍，看右邊和下面
// time: O(n*m) , extra space: O(1)
class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int ans = 0;
        for(int i = 0; i < board.size(); ++i) {
            for(int j = 0; j < board[i].size(); ++j) {
                if(board[i][j] == 'X') {
                    ans++;
                    if(i < board.size() - 1 && board[i + 1][j] == 'X') ans--;
                    if(j < board[i].size() - 1 && board[i][j + 1] == 'X') ans--;
                }
            }
        }
        return ans;
    }
};
