class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        int profit =0;
        int effPrice = prices[0];

        for(int i=1;i<n;i++){
            profit= max(profit,prices[i]-effPrice-fee);
            effPrice = min(effPrice,prices[i]-profit);
        }

        return profit;
    }
};
