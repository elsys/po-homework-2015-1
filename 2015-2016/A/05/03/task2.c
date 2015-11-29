#include <stdio.h>
#include <stdlib.h>
int main()
{
    int lines,counter,temp,counter2;
    printf("Input number of lines.\n");
    scanf("%d",&lines);

    for(counter=0;counter<=lines;counter++)
    {
        temp=lines-counter;
        for(counter2=0;counter2<lines*2;counter2++)
        {
            if(counter2>=temp && lines*2-1-counter2>temp)
                {
			printf("+");
		}
            else
                printf(" ");
        }
        printf("\n");
    }
}
