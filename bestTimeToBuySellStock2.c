#include <stdio.h>

int maxProfit(int prices[], int size)
{
    int maxProfit = 0;
    for (int i = 1; i < size; i++)
    {
        if (prices[i] > prices[i - 1])
        {
            maxProfit += prices[i] - prices[i - 1];
        }
    }
    return maxProfit;
}

int main()
{
    int prices[] = {7, 1, 5, 3, 6, 4};
    int size = sizeof(prices) / sizeof(prices[0]);
    int profit = maxProfit(prices, size);
    printf("Maximum Profit: %d\n", profit);
    return 0;
}
