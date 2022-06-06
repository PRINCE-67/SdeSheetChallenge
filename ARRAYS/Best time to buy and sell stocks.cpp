class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = INT_MIN;
        int mini = INT_MAX;
        int profit = 0;
        int n = prices.size();
        for (int i = 0; i < n; i++) {
            if (mini > prices[i]) {
                mini = prices[i];
                maxi = mini;
            }

            maxi = max(maxi, prices[i]);
            profit = max((maxi - mini), profit);
        }
        return profit;
    }
};