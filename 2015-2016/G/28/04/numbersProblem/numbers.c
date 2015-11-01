#include<stdio.h>

int main()
{
    int digits[10] = {0,0,0,0,0,0,0,0,0,0};
    int num, digit, i;

    scanf("%d", &num);
    
    while(num != 0)
    {
        digit = num % 10;
        digits[digit]++;
        num /= 10;
    }

   int helpCounter = 0;
    for(i = 0; i < 10; i++ )
    {
        if(digits[i] > 1)
        {
           printf(" %d repeats\n",i);
	    helpCounter=1;
        }
    }
    if(!helpCounter)
    {
       printf("The Digits Do Not Repeat\n");
    }
}


