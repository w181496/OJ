// Stack紀錄前面的狀態 (Only 遞減)
// 從底層的水窪慢慢往上加
class Solution {
public:
    int trap(vector<int>& height) {
        stack<pair<int,int>>stk;
        int ans = 0;
        for(int i = 0; i < height.size(); ++i) {
            if(stk.empty() || stk.top().first > height[i]) {
                stk.push(make_pair(height[i], i));   
            } else {
                int cnt = 0, tmp, mx = 0;
                while(!stk.empty() && stk.top().first <= height[i]) {
                    if(stk.top().first > tmp) ans += (i - stk.top().second - 1) * (stk.top().first - tmp);
                    tmp = stk.top().first;
                    stk.pop();
                    cnt++;
                }
                if(!stk.empty() && stk.top().first > height[i] && height[i] > tmp) ans += (i - stk.top().second - 1) * (height[i] - tmp);
                stk.push(make_pair(height[i], i));
            }
        }
        return ans;
    }
};
