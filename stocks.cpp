class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = INT_MAX;
        int profit = 0;
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < min) {
                min = prices[i];
            }
            if (prices[i] - min > profit) {
                profit = prices[i] - min;
            }
        }
        return profit;
    }
};
// Brute Force Approach:

// int n = prices.size();
// int current;
// int ith_profit = 0;
// int maxprofit = 0;

// for(int i = 0; i < n; i++){
//     current = prices[i];
//     for(int j = i + 1; j < n; j++){
//         if(prices[j] > current){
//             ith_profit = prices[j] - current;
//             if(ith_profit > maxprofit){
//                 maxprofit = ith_profit;
//             }
//         }
//     }
// }
// return maxprofit;