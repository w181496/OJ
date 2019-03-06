class Solution {
    public:
        bool isIsomorphic(string s, string t) {
            map<char, char>m, m2;
            for(int i = 0; i < s.size(); ++i) {
                if(m[s[i]] == 0) m[s[i]] = t[i];
                if(m[s[i]] != t[i]) return false;
            }
            for(int i = 0; i < t.size(); ++i) {
                if(m2[t[i]] == 0) m2[t[i]] = s[i];
                if(m2[t[i]] != s[i]) return false;
            }
            return true;
        }
};
