class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {

        //Sort the array
        sort(prices.begin(), prices.end());

        //First two elements would be the min values
        int cost = prices[0] + prices[1];

        //Check sum <=money or not
        if(cost <= money){
            money -= cost;
        }

        return money;
    }
};