// 二分搜
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int D) {
        if(weights.empty()) return 0;
        int mn = weights[0], mx = 0;
        for(int i = 0; i < weights.size(); ++i) {
            mn = max(mn, weights[i]);
            mx += weights[i];
        }
        int l = mn, r = mx;
        while(l < r) {
            int mid = (l + r) >> 1;
            if(check(weights, D, mid)) {
                r = mid;   
            } else {
                l = mid + 1;
            }
        }
        return l;
    }
    
    bool check(vector<int>& weights, int& D, int mx) {
        int sum = 0, cnt = 0;
        for(int i = 0; i < weights.size(); ++i) {
            if(sum + weights[i] > mx) {
                cnt++;
                sum = weights[i];
            } else {
                sum += weights[i];
            }
            if(cnt > D) return false;
        }
        if(sum > mx) return false;
        else cnt++;
        if(cnt <= D) return true;
        else return false;
    }
};
