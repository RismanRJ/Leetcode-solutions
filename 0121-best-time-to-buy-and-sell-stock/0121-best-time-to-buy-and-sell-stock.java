class Solution {
    public int maxProfit(int[] prices) {
       int profit=0;
       int cost= prices[0];

       for(int i=1;i<prices.length;i++){
            profit= Math.max(profit,prices[i]-cost);
            cost= Math.min(cost,prices[i]);
       }
       return profit;
    }
}