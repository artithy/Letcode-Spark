#include <stdio.h>

void plusOne(int digits[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        if (digits[i] < 9)
        {
            digits[i] += 1;
            break;
        }
    }
}

int main()
{
    int digits[] = {1, 2, 3};
    int n = 3;

    plusOne(digits, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", digits[i]);
    }
    printf("\n");

    return 0;
}
