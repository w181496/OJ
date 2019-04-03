class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& A) {
        vector<bool>ans;
        int now = 0;
        for(int i = 0; i < A.size(); ++i) {
            now = (now * 2 + A[i]) % 5;
            if(now % 5 == 0) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};
