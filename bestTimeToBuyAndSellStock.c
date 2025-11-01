#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter number of days: ");
    scanf("%d", &n);

    int price[n];
    printf("Enter prices: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &price[i]);
    }

    int minPrice = price[0];
    int maxProfit = 0;

    for (i = 0; i < n; i++)
    {
        if (price[i] < minPrice)
        {
            minPrice = price[i];
        }
        else
        {
            int profit = price[i] - minPrice;
            if (profit > maxProfit)
            {
                maxProfit = profit;
            }
        }
    }

    if (maxProfit > 0)
        printf("Maximum Profit = %d\n", maxProfit);
    else
        printf("Maximum Profit = 0\n");

    return 0;
}
