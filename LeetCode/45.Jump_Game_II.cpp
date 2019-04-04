// Greedy
// 不斷更新最遠能到距離
class Solution {
public:
    int jump(vector<int>& nums) {
        int mx = 0;
        int current = 0;
        int times = 0;
        for(int i = 0; i < nums.size(); ++i) {
            if(current < i) {
                current = mx;
                times++;
            }
            mx = max(mx, nums[i] + i);
        }
        return times;
    }
};
