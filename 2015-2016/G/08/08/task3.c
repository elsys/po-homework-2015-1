#include <stdio.h>

int main()
{

    int num;

    do
    {

        scanf("%d",&num);

    }
    while(num % 2 == 0 || num >= 201);

    int deer[num];
    int nums[100] = {0};
    int var =0,helper,i;

    for(i=0; i<num; i++)
    {

        do
        {

            scanf("%d",&deer[i]);

            if((deer[i]-1) < 100)
            {

                if(nums[deer[i]-1] < 2)
                {

                    nums[deer[i]-1]++;
                    var = 1;
                }

            }

        }
        while(!var);

        var = 0;

    }

    for(i=0; i<100; i++)
    {

        if(nums[i] == 1)
        {
            helper = i+1;
            break;
        }

    }

    printf("%d",helper);

    return 0;

}





