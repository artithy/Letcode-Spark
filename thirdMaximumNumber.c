#include <stdio.h>

int thirdMax(int nums[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (nums[j] > nums[i])
            {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    int count = 1;
    int current = nums[0];

    for (int i = 1; i < size; i++)
    {
        if (nums[i] != current)
        {
            current = nums[i];
            count++;

            if (count == 3)
            {
                return nums[i];
            }
        }
    }
    return nums[0];
}

int main()
{
    int arr[] = {2, 2, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int res = thirdMax(arr, n);
    printf("Result = %d\n", res);

    return 0;
}
