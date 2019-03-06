// hash table * 2
// 1. degree 2. first position
class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int>h, pos;
        int deg = 0, ans = 1e8;
        for(int i = 0; i < nums.size(); ++i) {
            h[nums[i]]++;
            if(!pos.count(nums[i])) {
                pos[nums[i]] = i;   
            }
            if(h[nums[i]] == deg)
                ans = min(ans, i - pos[nums[i]] + 1);
            else if(h[nums[i]] > deg) {
                ans = i - pos[nums[i]] + 1; 
                deg = h[nums[i]];
            }
        }
        return ans;
    }
};
