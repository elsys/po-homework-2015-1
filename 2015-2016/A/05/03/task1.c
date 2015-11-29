#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
char string[100];
int counter,lenght;
printf("Vuvedi string ");
scanf("%s",string);

printf("\n");
lenght=strlen(string);
	for(counter=lenght-1;counter>=0;counter--)
    	    {
        	printf("%c",string[counter]);
    	    }
}
