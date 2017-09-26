class Solution {
    public:
        vector<int> getRow(int rowIndex) {
            vector<int> ans, tmp;
            tmp.push_back(1);
            if(rowIndex == 0) return tmp;
            tmp.push_back(1);
            ans = tmp;
            for(int i = 2; i <= rowIndex; ++i) {
                ans.clear();
                ans.push_back(1);
                for(int j = 1; j < i; ++j) {
                    ans.push_back(tmp[j - 1] + tmp[j]);
                }
                ans.push_back(1);
                tmp = ans;
            } 
            return ans;
        }
};
