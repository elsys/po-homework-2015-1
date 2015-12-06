#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int n;
    printf("Vuvedi Nomer  = \n");
    scanf("%d", &n);

    int n2;
    n2 = n;

    int temp;
    
    int c0 = 0;
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;
    int c4 = 0;
    int c5 = 0;
    int c6 = 0;
    int c7 = 0;
    int c8 = 0;
    int c9 = 0;

    while(x2 > 0)
    {
        temp = x2 % 10;
        if(temp==0)c0++;
        if(temp==1)c1++;
        if(temp==2)c2++;
        if(temp==3)c3++;
        if(temp==4)c4++;
        if(temp==5)c5++;
        if(temp==6)c6++;
        if(temp==7)c7++;
        if(temp==8)c8++;
        if(temp==9)c9++;
        x2 = x2 / 10;
    }
    printf("\n");
    printf("\nFound '0' - %d times", c0);
    printf("\nFound '1' - %d times", c1);
    printf("\nFound '2' - %d times", c2);
    printf("\nFound '3' - %d times", c3);
    printf("\nFound '4' - %d times", c4);
    printf("\nFound '5' - %d times", c5);
    printf("\nFound '6' - %d times", c6);
    printf("\nFound '7' - %d times", c7);
    printf("\nFound '8' - %d times", c8);
    printf("\nFound '9' - %d times", c9);
}
