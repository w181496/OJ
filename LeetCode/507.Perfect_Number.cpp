class Solution {
    public:
        bool checkPerfectNumber(int num) {
            long long sum = 1;
            if(num == 1) return false;
            for(int i = 2; i * i < num; ++i)
                if(num % i == 0) sum += (num / i + i);
            return sum == num;
        }
};
