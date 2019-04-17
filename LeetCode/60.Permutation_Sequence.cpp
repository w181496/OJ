class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int>arr(n);
        string ans;
        for(int i = 0; i < n; ++i)
            arr[i] = i + 1;
        for(int i = 0; i < k - 1; ++i)
            next_permutation(arr.begin(), arr.end());
        for(int i = 0; i < arr.size(); ++i)
            ans += (char)('0' + arr[i]);
        return ans;
    }
};
