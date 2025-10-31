#include <stdio.h>

int main()
{
    int nums[] = {1, 2, 3, 1};
    int n = sizeof(nums) / sizeof(nums[0]);
    int temp;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }

    int found = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            found = 1;
            break;
        }
    }

    if (found == 1)
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
