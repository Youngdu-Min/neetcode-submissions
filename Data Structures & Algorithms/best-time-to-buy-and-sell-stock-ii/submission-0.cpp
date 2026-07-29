class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        for(int idx = 1; idx < prices.size(); idx++)
        {
            if(prices[idx - 1] < prices[idx])
                profit += prices[idx] - prices[idx - 1];
        }

        return profit;
    }
};