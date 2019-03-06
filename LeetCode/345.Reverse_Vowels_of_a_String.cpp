class Solution {
    public:
        string reverseVowels(string s) {
            string tmp;
            for(int i = 0; i < s.size(); ++i) 
                if(s[i] == 'a' || s[i] == 'e' || s[i] =='i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
                    tmp += s[i];
            int idx = tmp.size() - 1;
            for(int i = 0; i < s.size(); ++i)
                if(s[i] == 'a' || s[i] == 'e' || s[i] =='i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
                    s[i] = tmp[idx--];
            return s;
        }
};
