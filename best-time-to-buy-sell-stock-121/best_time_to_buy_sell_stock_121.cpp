#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int>& prices) {

    int buy = prices[0]; // first Buy
    int profit = 0;

    for (int i = 1; i < prices.size(); i++)
    {
        // if Buy > next price => Buy = new_price 
        if (buy > prices[i])
        {
            buy = prices[i];
        }
        else
        {
            // get max profit
            profit = max(profit, prices[i] - buy);
        }
    }

    return profit;

}


int main()
{
    vector<int> prices = { 7,6,4,3,1 };

    cout<< maxProfit(prices);
}