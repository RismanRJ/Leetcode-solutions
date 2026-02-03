class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = INT_MIN ,buy = prices[0]; // will buy first day stock 

        for(int i=0;i<prices.size();i++){
            int netProfit = prices[i]-buy; // buy it and sell it to track the profit
            profit = max(profit,netProfit); // update the max Profit
            buy = min(buy,prices[i]); // purchase stock at lower price to increase profit
        }


        return profit;
    }
};