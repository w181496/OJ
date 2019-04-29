class Solution {
public:
    int totalFruit(vector<int>& tree) {
        int t1, t2, cnt, totalcnt, ans = -1e8;
        if(tree.size() < 3) return tree.size();
        t1 = tree[0];
        t2 = tree[1];
        if(t1 == t2) cnt = 2;
        else cnt = 1;
        ans = totalcnt = 2;
        for(int i = 2; i < tree.size(); ++i) {
            if(tree[i] != t2) {
                if(tree[i] != t1) {
                    t1 = t2;
                    t2 = tree[i];
                    totalcnt = cnt + 1;
                } else {
                    swap(t1, t2);
                    totalcnt++;  
                }
                cnt = 1;   
            } else {
                totalcnt++;
                cnt++;   
            }
            ans = max(ans, totalcnt);
        }
        return ans;
    }
};
