#include <stdio.h>

void main ()
{
    int j, i, temp, num, numsCount=0;
    int nums[1000];
    while(1)
    {
        printf("input a:");
        scanf("%d", &num);
        if(num == 42 || numsCount == 1000)
        {
            break;
        }

        nums[numsCount] = num;
        numsCount += 1;
    }

    for(i = 0; i < numsCount - 1 ; i++)
    {
        for(j = 0;j<numsCount - 1; j++)
        {
            if(nums[j] > nums[j+1])
            {
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }

    for(i = 0; i < numsCount; i++)
    {
        printf("%d ",nums[i]);
    }
}
