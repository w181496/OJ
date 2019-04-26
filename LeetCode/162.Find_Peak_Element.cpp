// O(logn) binary search
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l = 0;
		int r = nums.size() - 1;
		while(l < r) {
			int mid = (l + r) >> 1;
			if(mid == 0) {
				if(mid + 1 < nums.size() && nums[mid] > nums[mid + 1]) return mid;
                else l = mid + 1; 
			} else if(mid == nums.size() - 1) {
				if(mid - 1 >= 0 && nums[mid] > nums[mid - 1]) return mid;
				else r = mid;
			} else {
				if(nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]) return mid;
				else if(nums[mid] > nums[mid - 1]) l = mid + 1;
				else r = mid;
			}
		}
		return l;
    }
};



// O(n)
/*
class Solution {
    public:
        int findPeakElement(vector<int>& nums) {
            int ans = 0;
            int now = -2147483648;
            for(int i = 0; i < nums.size(); ++i) {
                if(nums[i] > now) {
                    ans = i;
                    now = nums[i];
                }
            }
            return ans;
        }
};
*/
