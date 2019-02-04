class Solution {
public:
    vector<int> countBits(int num) {
        vector<int>ans;
        int two[30];
        int now;
        int SIZE = 30;
        two[0] = 1;
        for(int i = 1; i < SIZE; i++)
            two[i] = two[i - 1] * 2;
        
        ans.push_back(0); 
        if(num == 0) return ans;
        ans.push_back(1);
        if(num == 1) return ans;
        
        for(int i = 2; i <= num; i++) {
            bool flag = false;
            for(int j = 0; j < SIZE; j++) {
                if(two[j] == i) {
                    ans.push_back(1);
                    flag = true;
                    break;
                } else if(i > two[j]) {
                    now = two[j];
                }
            }
            if(!flag) ans.push_back(ans[i - now] + 1);
        }
        return ans;
    }
};
