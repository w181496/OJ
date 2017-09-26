class Solution {
    public:
        int findComplement(int num) {
            int tmp = 2147483647;
            if(num < 1073741824)
                for(int i = 1;; ++i) 
                    if((1 << i) > num) {
                        tmp = (1 << i) - 1;
                        break;
                    }
            return (tmp ^ num);
        }
};
