class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int min = 999;

        for(int idx = 0; idx < prices.size(); idx++)
        {
            int currProfit = 0;

            if(min > prices[idx]) min = prices[idx];

            currProfit = prices[idx] - min;

            if(currProfit > profit) profit = currProfit; 
        }

        return profit;
    }
};
