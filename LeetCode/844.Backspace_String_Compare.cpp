class Solution {
public:
    bool backspaceCompare(string S, string T) {
        vector<char>t1, t2;
        for(int i = 0; i < S.size(); ++i) {
            if(S[i] == '#' && !t1.empty()) t1.pop_back();
            if(S[i] != '#') t1.push_back(S[i]);
        }
        for(int i = 0; i < T.size(); ++i) {
            if(T[i] == '#' && !t2.empty()) t2.pop_back();
            if(T[i] != '#') t2.push_back(T[i]);
        }
        return t1 == t2;
    }
};
