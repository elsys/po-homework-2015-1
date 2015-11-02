#include<stdio.h>
int main()
{
    int multidimentionalArray[4][4];
    int rows = 0;
    int cols = 0;

    for(rows =0;rows <= 3; rows++)
    {
        for(cols =0;cols <= 3;cols++)
        {
            scanf("%d", &multidimentionalArray[rows][cols]);
        }
    }
    rows = 0;
    cols = 0;
    

    int secondmultidimentionalArray[4][4];
    int secondarrayRows = 0;
    int secondArrayCols = 0;

    for(secondarrayRows =0;secondarrayRows<=3;secondarrayRows++)
    {
        for(secondArrayCols =0;secondArrayCols<=3;secondArrayCols++)
        {
            secondmultidimentionalArray[secondarrayRows][secondArrayCols] = multidimentionalArray[secondArrayCols][secondarrayRows];
        }
    }

     for(secondarrayRows =0;secondarrayRows<=3;secondarrayRows++)
    {
	printf("\n");
        for(secondArrayCols =0;secondArrayCols<=3;secondArrayCols++)
        {
           printf("%d \t",secondmultidimentionalArray[secondarrayRows][secondArrayCols]);
        }
    }
     printf("\n");

     return 0;
}

