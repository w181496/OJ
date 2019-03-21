class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int cnt1 = 0, cnt2 = 0, zero = -1;
        if(nums.size() <= 3) {
            int sum = 1;
            for(int i = 0; i < nums.size(); ++i)
                sum *= nums[i];
            return sum;
        }
        for(int i = 0; i < nums.size(); ++i)
            if(nums[i] > 0) cnt1++;
            else if(nums[i] < 0) cnt2++;
            else zero = 1;
        int a = -1e9, b = -1e9, c = -1e9;
        if(cnt1 >= 3) {
            for(int i = 0; i < nums.size(); ++i) {
                if(nums[i] > a) {
                    c = b;
                    b = a;
                    a = nums[i];
                } else if(nums[i] > b) {
                    c = b;
                    b = nums[i];
                } else if(nums[i] > c) {
                    c = nums[i];
                }
            }
            int mx = -1e9, mn1 = 1e9, mn2 = 1e9;
            if(cnt2 >= 2) {
                for(int i = 0; i < nums.size(); ++i) {
                    if(nums[i] > 0) {
                        mx = max(mx, nums[i]);
                    } 
                    if(nums[i] < mn1) {
                        mn2 = mn1;
                        mn1 = nums[i];
                    } else if(nums[i] < mn2) {
                        mn2 = nums[i];
                    }
                }
                return max(a * b * c, mx * mn1 * mn2);
            }
            return a * b * c;
        } else if(cnt1 == 1 && cnt2 >= 2) {
            int mx = -1e9, mn1 = 1e9, mn2 = 1e9;
            for(int i = 0; i < nums.size(); ++i) {
                if(nums[i] > 0) {
                    mx = nums[i];
                } 
                if(nums[i] < mn1) {
                    mn2 = mn1;
                    mn1 = nums[i];
                } else if(nums[i] < mn2) {
                    mn2 = nums[i];
                }
            }
            return mx * mn1 * mn2;
        } else if(zero == 1) {
            return 0;
        } else {
            for(int i = 0; i < nums.size(); ++i) {
                if(nums[i] > a) {
                    c = b;
                    b = a;
                    a = nums[i];
                } else if(nums[i] > b) {
                    c = b;
                    b = nums[i];
                } else if(nums[i] > c) {
                    c = nums[i];
                }
            }
            return a * b * c;
        }
    }
};
