class Solution {
    public:
        int singleNumber(vector<int>& nums) {
            int tmp = 0;
            for(int i = 0; i < nums.size(); ++i)
                tmp ^= nums[i];
            return tmp;
        }
};
