class Solution {
public:
    int clumsy(int N) {
        long long int sum = 0;
        int type = 1;
        int i = N, flag = 1;
        while(i > 0) {
            if(i - 2 > 0)
                sum += (flag * i * (i - 1) / (i - 2));
            else if(i - 1 > 0)
                sum += (flag * i * (i - 1));
            else 
                sum += flag * i;
            flag = - 1;
            i -= 4;
        }
        i = N - 3;
        while(i > 0) {
            sum += i;
            i -= 4;
        }
        return sum;
    }
};
