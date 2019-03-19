class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        vector<int>cnt(26, 1e9);
        vector<string>ans;
        for(int i = 0; i < A.size(); ++i) {
            vector<int>tmp(26, 0);
            for(int j = 0; j < A[i].size(); ++j) {
                tmp[A[i][j] - 'a']++;
            }
            for(int j = 0; j < 26; ++j) {
                if(cnt[j] != 1e9 || i == 0)
                    cnt[j] = min(cnt[j], tmp[j]);
            }
        }
        for(int i = 0; i < 26; ++i) {
            if(cnt[i] != 1e9)
                for(int j = 0; j < cnt[i]; ++j)
                    ans.push_back(string(1, 'a' + i));
        }
        return ans;
    }
};
