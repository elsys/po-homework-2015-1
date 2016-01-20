#include <stdio.h>
#include <stdlib.h>
int input_compare(int num, int array[]);
int main()
{
    int num, sum;
    scanf("%d", &num);
    int array[num];

    sum = input_compare(num, array);
    printf("%d", sum);
    return 0;
}

int input_compare(int num, int array[])
{
    int i, sum=0, j;
    for(i = 0; i<num; i++)
    {
        scanf("%d", &array[i]);
        sum = sum + array[i];
    }

    for(i=0;i < num; i++)
    {
        for(j=0; j< num; j++)
        {

                if(array[i]==array[j] && i != j)
                {
                    sum = sum - array[i];
                }

        }

    }
    return sum;
}

