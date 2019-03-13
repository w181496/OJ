class Solution {
public:
    bool wordPattern(string pattern, string str) {
        stringstream ss(str);
        map<char, string>m;
        map<string, char>m2;
        string tmp;
        for(int i = 0; i < pattern.size(); ++i) {
            ss >> tmp;
            if(m.count(pattern[i]) || m2.count(tmp)) {
                if(tmp != m[pattern[i]]) return false;
                if(m2[tmp] != pattern[i]) return false;
            } else {
                m[pattern[i]] = tmp;   
                m2[tmp] = pattern[i];
            }
        }
        while(ss >> tmp) return false;
        return true;
    }
};
