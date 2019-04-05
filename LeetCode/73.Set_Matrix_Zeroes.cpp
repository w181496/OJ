// Space: O(1)
//
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        if(matrix.empty()) return;
        bool chk1 = false, chk2 = false;
        
        for(int i = 1; i < matrix[0].size(); ++i) 
                if(matrix[0][i] == 0) {
                    chk1 = true;
                    break;
                }
        for(int i = 1; i < matrix.size(); ++i) 
                if(matrix[i][0] == 0) {
                    chk2 = true;
                    break;
                }
        
        for(int i = 1; i < matrix.size(); ++i) 
            for(int j = 1; j < matrix[i].size(); ++j)
                if(matrix[i][j] == 0) 
                    matrix[i][0] = matrix[0][j] = 0;
        
        for(int i = 1; i < matrix.size(); ++i) 
            for(int j = 1; j < matrix[i].size(); ++j) 
                if(matrix[i][0] == 0 || matrix[0][j] == 0) matrix[i][j] = 0;  
        
        if(matrix[0][0] == 0) {
            for(int i = 0; i < matrix[0].size(); ++i) matrix[0][i] = 0;
            for(int i = 0; i < matrix.size(); ++i) matrix[i][0] = 0;
        } else {
            if(chk1) for(int i = 0; i < matrix[0].size(); ++i) matrix[0][i] = 0;
            if(chk2) for(int i = 0; i < matrix.size(); ++i) matrix[i][0] = 0;
        }
    }
};
