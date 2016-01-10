#include <stdio.h>

int main()
{

    int nums[1000];
    int i=0,a,b,m;
    printf("\n\n Type numbers which are not 42, and type 42 to stop typing and sort other! \n");
    while (i<1000)
    {
    printf("\n Number: ");
    scanf("%d", &nums[i]);
    if (nums[i] == 42)
    {
    break;
    }
    i++;
    }
    for(b=0; b<i; ++b)
    for(m=i-1; m>b;m--)
    {
    if(nums[m-1] > nums[m])
    {
    a = nums[m-1];
    nums[m-1] = nums[m];
    nums[m] = a;
    }
    }
    for(a=0; a<i; a++)
    printf("\n %d", nums[a]);
    return 0;
}

