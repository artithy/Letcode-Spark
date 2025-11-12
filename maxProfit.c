#include <stdio.h>

int maxProfit(int prices[], int size)
{
    if (size < 2)
        return 0;

    int buyStockPrice = prices[0];
    int profit = 0;

    for (int i = 1; i < size; i++)
    {
        int p = prices[i] - buyStockPrice;

        if (p > profit)
        {
            profit = p;
        }

        if (buyStockPrice > prices[i])
        {
            buyStockPrice = prices[i];
        }
    }

    return profit;
}

int main()
{
    int prices[] = {7, 1, 5, 3, 6, 4};
    int size = sizeof(prices) / sizeof(prices[0]);

    int result = maxProfit(prices, size);
    printf("Maximum Profit: %d\n", result);

    return 0;
}
