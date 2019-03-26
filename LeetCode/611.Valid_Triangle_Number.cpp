class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int ans = 0;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); ++i) {
            for(int j = i + 1; j < nums.size(); ++j) {
                for(int k = nums.size() - 1; k >= j + 1; --k) {
                    int e1 = nums[i], e2 = nums[j], e3 = nums[k];
                    if(e1 + e2 > e3) {
                        ans += (k - j);
                        break;
                    }
                }
            }
        } 
        return ans;
    }
};
