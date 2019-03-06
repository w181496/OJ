class NumMatrix {
public:
    vector<vector<int> >sum;
    NumMatrix(vector<vector<int>> matrix) {
        sum = matrix;
        for(int i = 0; i < matrix.size(); i++) {
            for(int j = 0; j < matrix[i].size(); j++) {
                if(i != 0) {
                    if(j == 0) {
                        sum[i][j] += sum[i - 1][j];
                    } else {
                        sum[i][j] += (sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1]); 
                    }
                } else if(i == 0 && j > 0) {
                    sum[i][j] += sum[i][j - 1];
                }
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        if(col1 == 0 && row1 == 0) return this->sum[row2][col2];
        if(row1 == 0) return this->sum[row2][col2] - this->sum[row2][col1 - 1];
        if(col1 == 0) return this->sum[row2][col2] - this->sum[row1 - 1][col2];
        return this->sum[row2][col2] - this->sum[row1 - 1][col2] - this->sum[row2][col1 - 1] + this->sum[row1 - 1][col1 - 1];    
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix obj = new NumMatrix(matrix);
 * int param_1 = obj.sumRegion(row1,col1,row2,col2);
 */
