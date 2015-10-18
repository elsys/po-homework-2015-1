#include<stdio.h>

int main(){

    int firstCounter = 0;
    int secondCounter = 0;
    int number = 0;
    int br = 0;
    int array[1000];

    for(firstCounter = 0; firstCounter < 1000; firstCounter++)
    {
        scanf("%d", &array[firstCounter]);
        if(array[firstCounter] == 42)
            break;
        number++;
    }

    for(firstCounter = 0; firstCounter < number; firstCounter++)
    {
        for(secondCounter = 0; secondCounter < number; secondCounter++)
        {
            if(array[firstCounter] > array[secondCounter])
            {
            br = array[firstCounter];
            array[firstCounter] = array[secondCounter];
            array[secondCounter] = br;
            }
        }
    }

    printf(" \nAfter sorting.\n");

    for(firstCounter = 0; firstCounter < number; firstCounter++)
    {
        printf("%d\n", array[firstCounter]);
    }
}
