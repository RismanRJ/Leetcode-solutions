class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int  n = prices.size();
        sort(prices.begin(),prices.end());
        int rem = money;
        int cnt=0;
        for(int i=0;i<2;i++){
            if(rem-prices[i]>=0) rem-=prices[i];
            else break;
            cnt++;
        }

        return cnt==2?rem:money;
    }
};