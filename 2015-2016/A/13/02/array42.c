#include <stdio.h>
#include <string.h>

int main()
{
    int i=-1, numbers[1000], p, q, temp=0;

    do
    {
        i++;
        scanf("%d", &numbers[i]);


    } while(numbers[i] != 42);


    for(p = 0; p <= i; p++)
    {
        for(q=0; q < i-p; q++)
        {
            if(numbers[q] > numbers[q+1])
            {
             temp = numbers[q];
             numbers[q] = numbers[q+1];
             numbers[q+1] = temp;

            }
        }
    }
    for(i = 0; i < p; i++)
		printf("%d\n", numbers[i]);

    return 0;
}
