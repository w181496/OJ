// 把當前最大翻到最上，再翻下去
// and 一些小優化
class Solution {
public:
    vector<int> pancakeSort(vector<int>& A) {
        vector<int> ans;
        for(int i = A.size() - 1; i >= 0; --i) {
            int mx = -1e8, idx = -1;
            for(int j = 0; j <= i; ++j) 
                if(A[j] > mx) {
                    mx = A[j];
                    idx = j;
                }
            if(idx == i) continue;
            if(idx) {
                reverse(A, 0, idx);
                ans.push_back(idx + 1);
            }
            if(i) {
                reverse(A, 0, i);
                ans.push_back(i + 1);
            }
        }
        return ans;
    }
    
    void reverse(vector<int>& A, int i, int j) {
        int t = (i + j) / 2;
        for(int k = 0; k <= t; ++k)
            swap(A[i + k], A[j - k]);
    }
};
