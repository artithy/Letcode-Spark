#include <stdio.h>

void plusOne(int digits[], int n)
{
    int carry = 1;

    for (int i = n - 1; i >= 0; i--)
    {
        int sum = digits[i] + carry;

        if (sum <= 9)
        {
            digits[i] = sum;
            carry = 0;
            break;
        }
        else
        {
            digits[i] = 0;
            carry = 1;
        }
    }
}

int main()
{
    int digits[] = {1, 9, 9};
    int n = 3;

    plusOne(digits, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", digits[i]);
    }
    printf("\n");

    return 0;
}
