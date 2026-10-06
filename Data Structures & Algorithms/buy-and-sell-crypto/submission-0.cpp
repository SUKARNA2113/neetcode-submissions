class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int maxProfit = 0;
        int minCost = prices[0];

        for(int i=0;i<prices.size();i++)
        {
            int profit = prices[i] - minCost;
            maxProfit = max(profit,maxProfit);
            minCost = min(minCost,prices[i]);
        }

        return maxProfit;

        
        
    }
};
