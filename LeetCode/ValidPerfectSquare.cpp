class Solution {
    public:
        bool isPerfectSquare(int num) {
            return (int)sqrt(num) * (int)sqrt(num) == num;
        }
};
