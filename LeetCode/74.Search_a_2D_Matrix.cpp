// 二分搜
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty() || matrix[0].empty()) return false;
        int m = matrix.size(), n = matrix[0].size();
        int l = 0, r = m * n - 1, x, y;
        while(l < r) {
            int mid = (l + r) >> 1;
            x = mid % n;
            y = mid / n;
            if(target == matrix[y][x]) return true;
            else if(target > matrix[y][x]) l = mid + 1;
            else r = mid;
        }
        if(matrix[l / n][l % n] == target) return true;
        return false;
    }

};
