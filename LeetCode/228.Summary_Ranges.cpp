class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>ans;
        string tmp;
        if(nums.empty()) return ans;
        int s = nums[0], e = nums[0];
        for(int i = 1; i < nums.size(); ++i) {
            if(i > 0 && nums[i] == nums[i - 1] + 1) {
                e = nums[i];
            } else {
                string str;
                str += to_string(s);
                if(e > s) {
                    str += "->";
                    str += to_string(e);
                }
                s = nums[i];
                ans.push_back(str);
            }
        }
        if(s >= e) {
            string str;
            str += to_string(s);
            ans.push_back(str);
        } else {
            string str;
            str += to_string(s);
            str += "->";
            str += to_string(e);
            ans.push_back(str);
        }
        return ans;
    }
};
