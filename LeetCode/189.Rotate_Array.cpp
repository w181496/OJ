class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int tmp;
        k %= nums.size();
        for(int i = 0; i < k; ++i) {
            tmp = nums[nums.size() - k + i];
            for(int j = nums.size() - k + i; j > i; --j) 
                nums[j] = nums[j - 1];   
            nums[i] = tmp;
        }
    }
};
