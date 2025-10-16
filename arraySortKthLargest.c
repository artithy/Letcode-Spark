#include <stdio.h>

int findKthLargest(int nums[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (nums[j] < nums[min])
            {
                min = j;
            }
        }
        int temp = nums[i];
        nums[i] = nums[min];
        nums[min] = temp;
    }

    int index = n - k;
    int largest = nums[index];
    return largest;
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
