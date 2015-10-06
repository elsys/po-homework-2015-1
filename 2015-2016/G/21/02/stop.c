#include <stdio.h>
#include <string.h>

void ToUpper(char* string);
int stringEquals(char firstString[], char secondString[]);


int main()
{
	char word[100];
	do{
        scanf("%s",word);
        if(stringEquals(word,"STOP"))
        {
            break;
        }
        else
        {
            ToUpper(word);
        }
       printf("%s\n",word);
	}while(1);
	return 0;
}

void ToUpper(char string[])
{
    int counter;
    for(counter=0; counter < strlen(string); counter++)
    {
        if(string[counter]>='a' && string[counter]<='z')
        {
            string[counter] -= 32;
        }
    }
}

int stringEquals(char firstString[], char secondString[])
{
    int counter = 0;
    while(counter < strlen(firstString) && counter < strlen(secondString))
    {
        if(firstString[counter] != secondString[counter])
        {
            return 0;
        }
        counter++;
    }
    if(counter == strlen(firstString) && counter == strlen(secondString))
    {
        return 1;
    }
    return 0;
}

