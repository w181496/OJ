// 用cnt記錄每個字元出現次數，同個亂序排列的字串，字元頻率相同。再把cnt hash成string，塞進map對應到ans陣列的index
class Solution {
    public:
        vector<vector<string>> groupAnagrams(vector<string>& strs) {
            map<string, int>m;
            vector<vector<string>>ans;
            int idx = 1;
            int cnt[256];
            for(int i = 0; i < strs.size(); ++i) {
                string tmp;
                for(int j = 0; j < 256; ++j) cnt[j] = 0;
                for(int j = 0; j < strs[i].size(); ++j) cnt[strs[i][j]]++;
                for(int j = 0; j < 256; ++j) 
                    if(cnt[j]) tmp =  tmp + (char)j + to_string(cnt[j]);
                if(m[tmp] == 0) {
                    m[tmp] = idx++;
                    vector<string>t;
                    t.push_back(strs[i]);
                    ans.push_back(t);
                } else {
                    ans[m[tmp] - 1].push_back(strs[i]);
                }
            }
            return ans;
        }

};
