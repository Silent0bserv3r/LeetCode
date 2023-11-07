#include <bits/stdc++.h>;
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cheapestPrice = INT_MAX;
        int profit = 0;
        for(int i = 0; i < prices.size(); i++) {
            if (prices[i] < cheapestPrice) {
                cheapestPrice = prices[i];
            }
            profit = max(profit, prices[i] - cheapestPrice);
        }
        return profit;
    }
};

/**
 * TestCases
 * [7,1,5,3,6,4]
 * [7,6,4,3,1]
*/