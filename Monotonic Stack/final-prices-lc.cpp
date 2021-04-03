// Each ith price is subtracted from the first price in right hand side which is less than price[i]
// Maintain dec or inc order where no special order constraint is given in question. Here left side.

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack < int > pref;
        vector < int > discount_prices = prices;
        for (int i = 0; i < int(prices.size()); i ++) {
            while (pref.size() > 0 && prices[pref.top()] >= prices[i]) {
                discount_prices[pref.top()] -= prices[i];
                pref.pop();
            } 
            pref.push(i);
        }
        return discount_prices;
    }
};
 
