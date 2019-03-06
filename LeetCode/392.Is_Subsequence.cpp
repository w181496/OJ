class Solution {
    public:
        bool isSubsequence(string s, string t) {
            int idx = 0;
            for(int i = 0; i < t.size(); ++i)
                if(t[i] == s[idx]) idx++;
            return s.size() == idx;
        }
};
