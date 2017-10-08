class Solution {
    public:
        vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
            map<int, int>m;
            vector<int>ans;
            for(int i = 0; i < nums1.size(); ++i)
                m[nums1[i]]++;
            for(int j = 0; j < nums2.size(); ++j)
                if(m[nums2[j]] > 0) ans.push_back(nums2[j]), m[nums2[j]] = 0;
            return ans;
        }
};
