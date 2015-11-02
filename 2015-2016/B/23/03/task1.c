#include <stdio.h>

int main()
{
    int rows,i,spaces,something;
    printf("Rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;++i)
    {
        for(spaces=1;spaces<=rows-i;spaces++)
        {
           printf("  ");
        }
        for(something=0;something!=2*i-1;something++)
        {
           printf("# ");
        }
        printf("\n");
    }
    return 0;
}

