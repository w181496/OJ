// O(N^2) 
class Solution {
public:
    int countSubstrings(string s) {
        int ans = 0;
        for(int i = 0; i < s.size(); ++i) {
            // odd or even
            helper(s, i, i + 1, ans);
            helper(s, i, i, ans);
        }
        return ans;
    }
    
    void helper(string& s, int l, int r, int& res) {
        if(l < 0 || r >= s.size()) return;
        while(l >= 0 && r < s.size() && s[l] == s[r]) {
            l--;
            r++;
            res++;
        }
    }
    
};
