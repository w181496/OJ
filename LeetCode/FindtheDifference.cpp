class Solution {
    public:
        char findTheDifference(string s, string t) {
            sort(s.begin(), s.end());
            sort(t.begin(), t.end());
            for(int i = 0; i < s.size(); ++i) 
                if(s[i] != t[i]) return min(s[i], t[i]);
            return s.size() > t.size() ? s[s.size() - 1] : t[t.size() - 1];
        }
};
