#include <stdio.h>
#include <string.h>

void arraySort(int array[],int arrayLenght);

int main()
{
	int numbers[1000];
    int i;

    for(i=0;i<1000;i++)
    {
        int number;
        scanf("%d",&number);
        if(number == 42)
        {
            break;
        }
        else
        {
            numbers[i] = number;
        }
    }

    int arrayLenght = i;
    arraySort(numbers,arrayLenght);

    for(i=0;i<arrayLenght;i++)
    {
        printf("%d\n",numbers[i]);
    }
	return 0;
}

void arraySort(int array[],int arrayLenght)
{
    int i,counter;

    for(i=0;i<arrayLenght;i++)
    {
        for(counter=0;counter<arrayLenght-1;counter++)
        {
            int helper;
            if(array[counter]>array[counter+1])
            {
                helper = array[counter];
                array[counter] = array[counter+1];
                array[counter+1] = helper;
            }
        }
    }
}
