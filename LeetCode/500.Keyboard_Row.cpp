class Solution {
    public:
        vector<string> findWords(vector<string>& words) {
            string s1 = "~!@#$%^&*()1234567890-=+`";
            string s2 = "qwertyuiop[]{}QWERTYUIOP\|";
            string s3 = "asdfghjkl;'ASDFGHJKL:";
            string s4 = "zxcvbnm,./ZXCVBNM<>?";
            int c[256];
            vector<string>ans;
            for(int i = 0; i < s1.size(); ++i) c[s1[i]] = 1;
            for(int i = 0; i < s2.size(); ++i) c[s2[i]] = 2;
            for(int i = 0; i < s3.size(); ++i) c[s3[i]] = 3;
            for(int i = 0; i < s4.size(); ++i) c[s4[i]] = 4;
            for(int i = 0; i < words.size(); ++i) {
                bool flag = false;
                if(words.size() == 0) continue;
                int tmp  = c[words[i][0]];
                for(int j = 1; j < words[i].size(); ++j) 
                    if(c[words[i][j]] != tmp) {
                        flag = true;
                        break;
                    }
                if(!flag) ans.push_back(words[i]);
            }
            return ans;
        }
};
