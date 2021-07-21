class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ret = 0;
        int buy = prices[0];
        for (int i = 1; i < prices.size(); ++i) {
            if (prices[i] < buy) {
                buy = prices[i];
            } else if (ret < prices[i] - buy) {
                ret = prices[i] - buy;
            }
        }
        return ret;
    }
};
