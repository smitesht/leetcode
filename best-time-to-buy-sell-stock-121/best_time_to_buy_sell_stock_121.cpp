#include <iostream>
#include <vector>

using namespace std;

static void buy_sell_stock_max_profit_121()
{
    vector<int> prices = { 2,4,1 };
    int buying_price = prices[0];
    int profit = 0;

    for (int ind = 0; ind < prices.size(); ind++)
    {
        if (prices[ind] < buying_price) {
            buying_price = prices[ind];
        }
        else
        {
            int current_profit = prices[ind] - buying_price;
            profit = current_profit > profit ? current_profit : profit;
        }
    }

    cout << profit << endl;
   
}