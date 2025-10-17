#include <stdio.h>

int findKthLargest(int nums[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[j] > nums[i])
            {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    return nums[k - 1];
}

int main()
{
    int nums[] = {3, 2, 1, 5, 6, 4};
    int n = sizeof(nums) / sizeof(nums[0]);
    int k = 2;

    int result = findKthLargest(nums, n, k);
    printf("The %d-th largest element is %d\n", k, result);

    return 0;
}
