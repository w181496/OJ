class Solution {
public:
    int romanToInt(string s) {
        int res = 0;
        for(int i = 0; i < s.size(); ++i) {
            if(s[i] == 'I') {
                if(i < s.size() - 1 && s[i + 1] == 'V') res += 4, i++;
                else if(i < s.size() - 1 && s[i + 1] == 'X') res += 9, i++;
                else res += 1;
            } else if(s[i] == 'X') {
                if(i < s.size() - 1 && s[i + 1] == 'L') res += 40, i++;
                else if(i < s.size() - 1 && s[i + 1] == 'C') res += 90, i++;
                else res += 10;
            } else if(s[i] == 'C') {
                if(i < s.size() - 1 && s[i + 1] == 'D') res += 400, i++;
                else if(i < s.size() - 1 && s[i + 1] == 'M') res += 900, i++;
                else res += 100;
            } else {
                if(s[i] == 'V') res += 5;
                if(s[i] == 'L') res += 50;
                if(s[i] == 'D') res += 500;
                if(s[i] == 'M') res += 1000;
            }
        }
        return res;
    }
};
