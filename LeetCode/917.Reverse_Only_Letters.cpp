class Solution {
public:
    string reverseOnlyLetters(string S) {
        string ans = S;
        int idx = 0;
        for(int i = S.size() - 1; i >= 0; --i) {
            if((S[i] >= 'a' && S[i] <= 'z') || (S[i] >= 'A' && S[i] <= 'Z')) {
                while(!((S[idx] >= 'a' && S[idx] <= 'z') || (S[idx] >= 'A' && S[idx] <= 'Z')))
                    idx++;
                ans[idx++] = S[i];
            }
        }
        return ans;
    }
};
