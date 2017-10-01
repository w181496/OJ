class Solution {
    public:
        int firstUniqChar(string s) {
            int c[256] = {};
            for(int i = 0; i < s.size(); ++i) c[s[i]]++;
            for(int i = 0; i < s.size(); ++i) if(c[s[i]] == 1) return i;
            return -1;
        }
};
