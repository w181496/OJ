class Solution {
public:
    bool isPowerOfFour(int num) {
        return !(num & (num - 1)) && (num & 0b1010101010101010101010101010101);
    }
};
