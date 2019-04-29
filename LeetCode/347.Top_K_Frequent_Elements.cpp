class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>count;
        int mx = -1;
        for(int i = 0; i < nums.size(); ++i) {
            count[nums[i]]++;
            mx = max(mx, count[nums[i]]);
        }
        
        vector<vector<int>>tmp(mx + 1);
        for(unordered_map<int,int>::iterator it = count.begin(); it != count.end(); ++it) {
            tmp[it->second].push_back(it->first);
        }
        
        vector<int>ans;
        for(int i = mx; i >= 0; --i) {
            if(ans.size() >= k) return ans;
            if(!tmp[i].empty()) {
                for(int j = 0; j < tmp[i].size(); ++j) {
                    if(ans.size() >= k) return ans;
                    ans.push_back(tmp[i][j]);
                }
            }
        }
        return ans;
        
    }
};
