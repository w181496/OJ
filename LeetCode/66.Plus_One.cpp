class Solution {
    public:
        vector<int> plusOne(vector<int>& digits) {
            int sz = digits.size();
            digits[sz - 1]++;
            for(int i = sz - 1; i >= 0; --i) {
                if(digits[i] > 9) {
                    digits[i] %= 10;
                    if(i == 0) {
                        digits.push_back(digits[sz - 1]);
                        for(int j = sz - 1; j > 0; --j) digits[j] = digits[j - 1];
                        digits[0] = 1;
                    } else {
                        digits[i - 1]++;
                    }
                }
            }
            return digits;
        }
};
