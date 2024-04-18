#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int>& prices) 
{
    int buy = prices[0];
    int max = 0;
    int max_sum = 0;
    for (int i = 1; i < prices.size(); i++)
    {
        if (buy > prices[i] || prices[i - 1] > prices[i])
        {
            buy = prices[i];
            max_sum = max_sum + max;
            max = 0;
        }
        else
        {
            int sum = prices[i] - buy;
            max = max < sum ? sum : max;            
        }
    }

    max_sum = max_sum + max;
    return max_sum;
}

int main()
{
    vector<int> nums = { 7,6,4,3,1 };

    cout << maxProfit(nums);
}