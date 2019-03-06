class Solution {
    public:
        int distributeCandies(vector<int>& candies) {
            int sz = candies.size() / 2;
            int ans = 0;
            map<int, int>m;
            for(int i = 0; i < candies.size(); ++i) {
                if(m[candies[i]] == 0) {
                    ans++;
                    m[candies[i]]++;
                }
                if(ans == sz) return sz;
            }
            return ans;
        }
};
