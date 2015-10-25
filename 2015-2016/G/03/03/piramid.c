 #include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows;
    int floor;
    int i=1;
    int b=0;
    int k=0;
    int counter;
    printf("\nenter number of rows=");scanf("%d",&rows);
    floor=2*rows-1;

for(i=1;i<=rows;i++)
{
    counter=floor-k;

    while(b<counter)
    {
        printf(" ");
        printf("* ");
b++;
    }
    printf("\n");
    b=0;
k=k+2;
}

    return 0;
}


