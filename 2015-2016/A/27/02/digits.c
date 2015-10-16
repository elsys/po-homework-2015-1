#include <stdio.h>
int main()
{
    int number,check,counter,digit;
    printf("Number: ");
    scanf("%d",&number);
    if(number<0) number=number*-1;
    else if(number==0) printf("\nDigit 0: 1 time");
    for(digit=0;digit<10;digit++)
    {
        counter=0;
        for(check=number;check!=0;)
        {
            if(check%10==digit) counter++;
            check=check/10;
        }
        if(counter>0) printf("\nDigit %d: %d time(s)",digit,counter);
    }
}
