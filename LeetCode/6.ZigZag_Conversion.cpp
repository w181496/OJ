class Solution {
public:
    string convert(string s, int numRows) {
        string ans = "";
        if(numRows == 1) return s;
        for(int i = 0; i < numRows; ++i) {
            if(i == 0 || i == numRows - 1) {
                int idx = i;
                int diff = 2 * (numRows - 1);
                while(idx < s.size()) {
                    ans += s[idx];
                    idx += diff; 
                }
            } else {
                int idx = i;
                int diff = 2 * (numRows - 1);
                int diff2 = 2 * (numRows - i - 1);
                while(idx < s.size()) {
                    ans += s[idx];
                    if(idx + diff2 < s.size()) ans += s[idx + diff2];
                    idx += diff;
                }
            }
        }
        return ans;
    }
};
