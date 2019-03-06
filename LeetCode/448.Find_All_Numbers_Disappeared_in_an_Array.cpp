class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        for(int i = 0; i < nums.size(); i++) {
            int tmp = nums[i];
            if(nums[i] < 0) tmp *= -1 ;
            if(nums[tmp - 1] > 0) nums[tmp - 1] *= -1;
        }
        for(int i = 0; i < nums.size(); i++)
            if(nums[i] > 0) ans.push_back(i+1);
        return ans;
    }
};
