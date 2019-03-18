class Solution {
public:
    int bitwiseComplement(int N) {
        long long int two[32];
        two[0] = 1;
        if(N == 0) return 1;
        for(int i = 1; i < 32; ++i)
            two[i]  = two[i - 1] * 2;
        for(int i = 0; i < 32; ++i)
            if(two[i] == N) return two[i] - 1;
            else if(two[i] > N) return two[i] - N - 1;
        return 0;
    }
};
