class Solution {
    public:
        int strStr(string haystack, string needle) {
            int sz = needle.size();
            if(haystack == needle || sz == 0) return 0;
            if(haystack.size() <= sz) return -1;
            for(int i = 0; i <= haystack.size() - sz; ++i) {
                if(haystack.substr(i, sz) == needle) return i;
            }
            return -1;
        }
};
