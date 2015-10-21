#include<stdio.h>

int main(){

    int number[100] = {0};
    int integer = 0;
	
    scanf("%d", &integer);

    while(integer != 0)
    {
        number[integer % 10]++;
	integer = integer / 10;
    }
    
    for(integer = 0; integer < 10; integer++)
    {
	printf("\n %d --> %d\n", integer, number[integer]);
    }
    
    

}

