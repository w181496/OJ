/*
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            vector<int>ans;
            for(int i = 0; i < nums.size(); ++i) {
                for(int j = i + 1; j < nums.size(); ++j) {
                    if(nums[i] + nums[j] == target) {
                        ans.push_back(i);
                        ans.push_back(j);
                        return ans;
                    }  
                }
            }
        }
};
*/

// O(n)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>hash;
	    for(int i = 0; i < nums.size(); ++i) {
	        if(!hash.count(nums[i])) {
	            hash[target - nums[i]] = i;
	        } else {
		        vector<int>ans;
	            ans.push_back(hash[nums[i]]);
                ans.push_back(i);
                return ans;
            }
	    }
        return vector<int>();
    }
};



