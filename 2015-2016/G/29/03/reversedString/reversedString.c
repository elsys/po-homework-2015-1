#include <string.h>
#include <stdio.h>
void main(void)
{
    char words[100];
    gets(words);
    int lenght = strlen(words);
    char reversedStr[100];
    int i = 0;
    //rstr[l]='\0';
    for(lenght=lenght-1;lenght >= 0;lenght--)
	{
	  reversedStr[i] = words[lenght];
           i ++;
    }
   printf("%s",reversedStr);

}
