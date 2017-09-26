class Solution {
    public:
        int lengthOfLastWord(string s) {
            int idx = 0;
            bool flag = true;
            for(int i = s.size() - 1; i >= 0; --i)
                if(s[i] == ' ') {
                    if(!flag) {
                        idx = i;
                        break;
                    }
                } else if(s[i] != ' ') {
                    flag = false;
                }
            int ans = 0;
            for(int i = idx; i < s.size(); ++i) 
                if(s[i] != ' ') ans++;
            return ans;
        }
};
