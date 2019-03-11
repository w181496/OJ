class Solution {
public:
    int minAreaRect(vector<vector<int>>& points) {
        map<pair<int,int>,int>hash;
        for(int i = 0; i < points.size(); ++i) {
            pair<int, int>p = make_pair(points[i][0], points[i][1]);
            hash[p] = i;
        }
        int ans = 1e8;
        for(int i = 0; i < points.size(); ++i) {
            for(int j = i + 1; j < points.size(); ++j) {
                pair<int, int>p1 = make_pair(points[i][0], points[j][1]);
                pair<int, int>p2 = make_pair(points[j][0], points[i][1]);
                if(hash.count(p1) && hash.count(p2)) {
                    int area = (p2.first - p1.first) * (p2.second - p1.second);
                    if(area > 0) ans = min(ans, area);
                }
            }
        }
        return ans == 1e8 ? 0 : ans;
    }
};
