# Two variable approach

- Keep track of cheapest price yet and current maximum profit.
- Traverse through the array and calculate the max profit
- `maxprofit  = currentprice - cheapeseprice`
- DO NOT reset the profits if new cheapest price is found (in case you can’t buy anymore)

```cpp
int cheapestPrice = INT_MAX;
int maxProfit = 0;
for ( loop i from 0 .. nums.size()) {
	cheapestPrice = min(cheapestPrice, nums[i]);
	profit = max(profit, nums[i] - cheapestPrice);
}
return profit;
```