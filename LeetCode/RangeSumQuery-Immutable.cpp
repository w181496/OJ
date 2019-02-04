class NumArray {
public:
    vector<int>sum;
    NumArray(vector<int> nums) {
        int tmp = 0;
        sum.push_back(0);
        for(int i = 0; i < nums.size(); ++i) {
            tmp += nums[i];
            sum.push_back(tmp);
        }
    }
    
    int sumRange(int i, int j) {
        return this->sum[j + 1] - this->sum[i];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */
