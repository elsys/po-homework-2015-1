#include <stdio.h>
void main (void)
{
    int i=1,s=1,h,k=0;
    printf("vuvedi viso4ina:");scanf("%d",&h);
    for(;h>0;h--)
    {
        for(;s<=h-1;s++)
        {
           printf(" ");
        }
        s=1;
        while(k!=2*i-1)
        {
           printf("*");
           k++;
        }
        k=0;
        i++;
        printf("\n");
    }
    
}
