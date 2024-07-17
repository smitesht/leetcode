# 121. Best Time to Buy and Sell Stock

LeetCode: [121. Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/)

```
Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
Example 2:

Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.


Constraints:

1 <= prices.length <= 105
0 <= prices[i] <= 104

```

### Answer

- Initialize the first element as a Buy.
- If the next element is less than Buy, mark this less element as a Buy.

  **if (buy > prices[i])
  {
  buy = prices[i];
  }**

- If the next element is greater than Buy, calculate the profit **(prices[i] - Buy)**, and check whether this is the maximum profit.

```cpp

int maxProfit(vector<int>& prices) {
    int buy = prices[0];
    int profit = 0;

    for (int i = 1; i < prices.size(); i++) {
        if (buy > prices[i]) {
            buy = prices[i];
        } else {
            profit = max(profit, prices[i] - buy);
        }
    }

    return profit;
}

```
