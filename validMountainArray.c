#include <stdio.h>

int validMountainArray(int arr[], int n)
{
    int i = 0;

    if (n < 3)
    {
        return 0;
    }

    while (i + 1 < n && arr[i] < arr[i + 1])
    {
        i++;
    }

    if (i == 0 || i == n - 1)
    {
        return 0;
    }

    while (i + 1 < n && arr[i] > arr[i + 1])
    {
        i++;
    }

    return (i == n - 1);
}
