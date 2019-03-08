class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        vector<int>ans;
        for(int i = 0; i < findNums.size(); ++i)
            for(int j = 0; j < nums.size(); ++j)
                if(nums[j] == findNums[i]) {
                    bool flag = false;
                    for(int k = j + 1; k < nums.size(); ++k) {
                        if(nums[k] > nums[j]) {
                            flag = true;
                            ans.push_back(nums[k]);
                            break;
                        }
                    }
                    if(!flag) ans.push_back(-1);
                    break;
                }
        return ans;
    }
};
