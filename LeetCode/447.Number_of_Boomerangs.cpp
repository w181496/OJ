class Solution {
public:
    int numberOfBoomerangs(vector<pair<int, int>>& points) {
        int sz = points.size();
        int ans = 0;
        for(int i = 0; i < sz; ++i) {
            unordered_map<int,int>m;
            for(int j = 0; j < sz; ++j) {   
                if(i == j) continue;
                int dis;
                dis = (points[i].first - points[j].first) * (points[i].first - points[j].first) + (points[i].second - points[j].second) * (points[i].second - points[j].second);
                if(m.count(dis)) m[dis]++;
                else m[dis] = 1;
            }
            for(unordered_map<int,int>::iterator it = m.begin(); it != m.end(); it++) 
                if(it->second > 1)
                    ans += (it->second * (it->second - 1));
        } 
        return ans;
    }
    
};
