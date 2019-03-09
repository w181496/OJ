// 紀錄左、右括號數量
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>res;
        dfs(n, n, "", res);
        return res;
    }
    
    void dfs(int l, int r, string now, vector<string>&res) {
        if(l == 0 && r == 0) {
            res.push_back(now);
        } else if(l > r) {
            return;
        } else {
            if(l > 0) dfs(l - 1, r, now + '(', res);
            if(r > 0) dfs(l, r - 1, now + ')', res);
        }
    }
};
