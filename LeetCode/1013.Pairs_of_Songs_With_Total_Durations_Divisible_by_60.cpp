class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int ans = 0;
        unordered_map<int, int>m;
        for(int i = 0; i < time.size(); ++i)
            if(m.count((60 - time[i] % 60) % 60)) {
                ans += m[(60 - time[i] % 60) % 60];
                m[time[i] % 60]++;
            } else {
                m[time[i] % 60]++;   
            }
        return ans;
    }
};
