class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long int a , b, c;
        a = b = c = -2147483649;
        for(int i = 0; i < nums.size(); ++i) {
            if(nums[i] > a) {
                c = b;
                b = a;
                a = nums[i];
            } else if(nums[i] > b && nums[i] != a) {
                c = b;
                b = nums[i];
            } else if(nums[i] > c && nums[i] != a && nums[i] != b) {
                c = nums[i];
            }
        }
        if(c != -2147483649) return c;
        return a;
    }
};
