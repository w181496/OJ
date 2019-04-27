// 摩爾投票法 space O(1)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cand = -1, cnt = 0;
        for(int i = 0; i < nums.size(); ++i) {
            if(cnt == 0) {
                cand = nums[i];
                cnt++;
            } else if(nums[i] == cand) {
                cnt++;
            } else {
                cnt--;
            }
        }
        return cand;
    }
};

/* Bad method
class Solution {
    public:
        int majorityElement(vector<int>& nums) {
            map<int, int>m;
            int n = nums.size() & 1 ? nums.size() / 2 + 1 : nums.size() / 2;
            for(int i = 0; i < nums.size(); ++i)
                m[nums[i]]++;
            for(map<int, int>::iterator it = m.begin(); it != m.end(); it++)
                if((it->second) >= n) return (it->first);        
        }
};
*/
