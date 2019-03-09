class Solution {
public:
    vector<int> constructRectangle(int area) {
        int start = (int)sqrt(area);
        vector<int>ans;
        for(int i = 0; i < start; ++i)
            if(area % (start - i) == 0) {
                ans.push_back(area / (start - i));
                ans.push_back(start - i);
                break;
            }
        if(area == 0) {
            ans.push_back(0);
            ans.push_back(0);
        }
        return ans;
    }
};
