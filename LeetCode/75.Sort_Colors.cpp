class Solution {
public:
    void sortColors(vector<int>& nums) {
        int p1 = 0, p2 = nums.size() - 1;
        int now = 0;
        while(now <= p2) {
            if(nums[now] == 0) {
                swap(nums[now], nums[p1]);
                p1++;
                now++;
            } else if(nums[now] == 1) {
                now++;
            } else {
                swap(nums[now], nums[p2]);
                p2--;
            }
        }
    }
};
