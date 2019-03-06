class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int id1, id2;
            int ans = 0;
            id1 = id2 = 0;
            while(id2 < prices.size()) {
                if(prices[id2] < prices[id1]) id1 = id2;
                ans = max(prices[id2] - prices[id1], ans);
                id2++;
            }
            return ans;
        }
};
