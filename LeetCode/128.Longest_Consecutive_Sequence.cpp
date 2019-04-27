// O(N)
// 區間連續性的關係，只需要紀錄左右兩端的長度，並更新即可
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int>hash;
        if(nums.empty()) return 0;
        int ans = 1;
        for(int i = 0; i < nums.size(); ++i) {
            int now = nums[i];
            if(!hash.count(now)) {
                int l = 0;
                if(hash.count(now - 1) && hash.count(now + 1)) {
                    l = hash[now - 1] + hash[now + 1] + 1;
                    hash[now] = hash[now - hash[now - 1]] = hash[now + hash[now + 1]] = l;
                } else if(hash.count(now - 1)) {
                    l = hash[now - 1] + 1;
                    hash[now] = hash[now - hash[now - 1]] = l;
                } else if(hash.count(now + 1)) {
                    l = hash[now + 1] + 1;
                    hash[now] = hash[now + hash[now + 1]] = l;
                } else {
                    hash[now] = 1;
                }
                ans = max(ans, l);
            }    
        }
        return ans;
    }
};
