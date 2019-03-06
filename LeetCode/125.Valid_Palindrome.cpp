class Solution {
    public:
        bool isPalindrome(string s) {
            string tmp;
            for(int i = 0; i < s.size(); ++i)
                if(s[i] >= 'a' && s[i] <= 'z') tmp += (s[i] - 'a' + 'A');
                else if(s[i] >= 'A' && s[i] <= 'Z') tmp += s[i];
                else if(s[i] >= '0' && s[i] <= '9') tmp += s[i];
            for(int i = 0; i <= tmp.size() / 2; ++i)
                if(tmp[i] != tmp[tmp.size() - i - 1]) return false;
            return true;
        }
};
