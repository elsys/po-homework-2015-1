#include <stdio.h>

int main()
{
    int i;
    int digits[10] = {0};
    int number;
    scanf("%d",&number);

    if(number<0)
    {
        number *= -1;
    }
    while(number > 0)
    {
        int helper = number % 10;
        digits[helper]++;
        number /= 10;
    }
    int repeat = 0;
    for(i=0;i<10;i++)
    {
        if(digits[i]>1)
        {
            printf("Cifrata %d se povtarq\n",i);
	    repeat=1;
        }
    }
    if(!repeat)
    {
       printf("nqma povtarqshti se cifri\n");
    }
}
