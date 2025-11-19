#include <stdio.h>

int reverse(int x)
{
    int rev = 0;
    int sign = x < 0 ? -1 : 1;

    if (x < 0)
        x = -x;

    while (x != 0)
    {
        int digit = x % 10;
        rev = rev * 10 + digit;
        x = x / 10;
    }

    return rev * sign;
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%d\n", reverse(n));
    return 0;
}
