class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum = 0;
        for(int i = 0; i < gas.size(); ++i)
            sum += (gas[i] - cost[i]);
        if(sum < 0) return -1;

        vector<int>res(2 * gas.size());
        for(int i = 0; i < gas.size(); ++i)
            res[i] = res[i + gas.size()] = (gas[i] - cost[i]);		
        bool flag = false;
        int ans = 0, tmp = 0;
        for(int i = 0; i < res.size(); ++i) {
            if(!flag && res[i] < 0) continue;
            if(res[i] > 0) {
                if(!flag) {
                    flag = true;
                    ans = i % gas.size();
                }
            }
            if(flag)
                tmp += res[i];
            if(flag && tmp < 0) {
                flag = false;
                tmp = 0;
                ans = -1;
            }
        }
        return ans;
    }
};



