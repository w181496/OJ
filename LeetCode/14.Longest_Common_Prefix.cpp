class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            string prefix;
            if(strs.size() == 0) return prefix;
            for(int i = 0; i < strs[0].size(); ++i) {
                bool flag = false;
                for(int j = 0; j < strs.size(); ++j) {
                    if(strs[j][i] != strs[0][i]) {
                        flag = true;
                        break;
                    }
                }
                if(flag) return prefix;
                prefix = prefix + strs[0][i];
            }
            return prefix;
        }
};
