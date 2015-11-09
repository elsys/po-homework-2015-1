#include <stdio.h>

int main()
{
    int nums[4][4];
    int a;
    int b;
    for(a = 0; a < 4; a ++)
    {
    for(b = 0; b < 4; b++)
        {
     scanf("%d", &nums[a ][b]);
        }
    }

      int nums2[4][4];

       for(a = 0; a < 4; a ++)
    {
        for(b = 0; b < 4; b++)
        {
         nums2[a ][b] = nums[b][a ];
        }
    }

          for(a = 0; a < 4; a ++)
    {
           for(b = 0; b < 4; b++)
        {
            printf("%d ", nums2[a ][b]);
        }

             printf("\n");
    }
}
