class Solution {
    public:
        bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
            map<int, int>m;
            int len = calc(p1[0], p1[1], p2[0], p2[1]);
            m[len]++;
            len = calc(p1[0], p1[1], p3[0], p3[1]);
            m[len]++;
            len = calc(p1[0], p1[1], p4[0], p4[1]);
            m[len]++;
            len = calc(p2[0], p2[1], p3[0], p3[1]);
            m[len]++;
            len = calc(p2[0], p2[1], p4[0], p4[1]);
            m[len]++;
            len = calc(p3[0], p3[1], p4[0], p4[1]);
            m[len]++;
            int cnt = 0;
            bool flag = false;
            for(auto i: m) {
                cnt++;
                if(cnt > 2) return false;
                if(i.second == 2 || i.second == 4) flag = true;
            }
            return m[0] == 0 && flag;
        }

        int calc(int x1, int y1, int x2, int y2) {
            return ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
        }
};
