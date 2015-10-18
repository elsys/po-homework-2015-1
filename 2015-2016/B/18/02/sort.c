#include<stdio.h>

int main(){

    int firstCounter = 0;
    int secondCounter = 0;
    int number = 0;
    int br;
    int array[1000];

    scanf("%d", &array[number]);
    while(array[number] != 42)
    {	
        number++;
	scanf("%d", &array[number]);

    }

    for(firstCounter = 0; firstCounter < number; firstCounter++)
    {
	for(secondCounter = 0; secondCounter < number; secondCounter++)
	{
	    if(array[secondCounter - 1] < array[secondCounter])
	    {
		br = array[firstCounter];
		array[firstCounter] = array[firstCounter - 1];
		array[firstCounter - 1] = br;
	    }
	}
    }

    printf(" \nAfter sorting.\n");

    for(firstCounter = 0; firstCounter < number; firstCounter++)
    {
        printf("%d\n", array[firstCounter]);
    }
}
