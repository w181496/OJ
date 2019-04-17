class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<vector<int>>mx(n, vector<int>(n, 0));
        vector<vector<bool>>check(n, vector<bool>(n, true));
        dfs(mx, n, n, 0, 0, ans);
        return ans;
    }
    
    void dfs(vector<vector<int>>& mx, int remain, int& n, int nx, int ny, vector<vector<string>>& ans) {
        if(remain == 0) {
            vector<string>tmp;
            for(int i = 0; i < mx.size(); ++i) {
                string s;
                for(int j = 0; j < mx[i].size(); ++j)
                    s += (mx[i][j] == 0 ? '.' : 'Q');
                tmp.push_back(s);
            }
            ans.push_back(tmp);
            return;
        }
        
        if(ny >= n) return;
        
        if(nx >= n) {
            dfs(mx, remain, n, 0, ny + 1, ans);
            return;
        }
        
        if(check(mx, nx, ny, n)) {
            mx[ny][nx] = 1;
            dfs(mx, remain - 1, n, nx + 1, ny, ans);  
            mx[ny][nx] = 0;
        } 
            
        dfs(mx, remain, n, nx + 1, ny, ans);
        
    }
    
    bool check(vector<vector<int>>& mx, int nx, int ny, int& n) {
        for(int i = 0; i < n; ++i) {
            if(mx[ny][i]) return false;
            if(mx[i][nx]) return false;
        } 
        
        for(int i = 1;; ++i) {
            if(nx - i < 0 || ny - i < 0) break;
            if(mx[ny - i][nx - i]) return false;
        }
        
        for(int i = 1;; ++i) {
            if(nx + i >= n || ny + i >= n) break;
            if(mx[ny + i][nx + i]) return false;
        }
        
        for(int i = 1;; ++i) {
            if(nx - i < 0 || ny + i >= n) break;
            if(mx[ny + i][nx - i]) return false;
        }
        
        for(int i = 1;; ++i) {
            if(nx + i >= n || ny - i < 0) break;
            if(mx[ny - i][nx + i]) return false;
        }
        
        return true;
    }
    
};
