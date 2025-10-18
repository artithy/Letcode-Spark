#include <stdio.h>

int majorityElement(int nums[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (nums[j] == nums[i])
            {
                count++;
            }
        }
        if (count > n / 2)
        {
            return nums[i];
        }
    }
    return -1;
}

int main()
{
    int nums[] = {2, 2, 1, 1, 1, 2, 2};
    int n = sizeof(nums) / sizeof(nums[0]);
    int result = majorityElement(nums, n);
    printf("Majority element: %d\n", result);
    return 0;
}
