class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int l = 0,r = 0;
        int profit = INT_MIN;

        while(r < n){
            int sell = prices[r];
            int buy = prices[l];
            if(buy > sell){
                l = r;
            }else {  
                profit = max(profit,sell - buy);
                r++;
            }
        }

        return profit;
    }
};
