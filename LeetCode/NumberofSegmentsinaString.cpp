class Solution {
    public:
        int countSegments(string s) {
            stringstream ss(s);
            int ans = 0;
            string tmp;
            while(ss >> tmp) ans++;
            return ans;
        }
};
