#include <stdio.h>

int removeElement(int *nums, int numsSize, int val)
{
    int k = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != val)
        {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}

int main()
{
    int nums[] = {3, 2, 2, 3};
    int val = 3;
    int size = sizeof(nums) / sizeof(nums[0]);

    int newLength = removeElement(nums, size, val);

    printf("New length: %d\n", newLength);
    printf("Array after removal: ");
    for (int i = 0; i < newLength; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
