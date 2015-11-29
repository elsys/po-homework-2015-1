#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Roman_Value(char character)
{
int n=0;

if(character=='I')
n=1;

else if(character== 'V')
n=5;

else if(character== 'X')
n=10;

else if(character== 'L')
n=50;

else if(character== 'C')
n=100;

else if(character== '\0')
n=0;


return n;
}

int main()
{
char string[100];
int counter=0,number=0;
printf("Enter Roman number:");
scanf("%s",string);
if(Roman_Value(string[counter])<=0)
            {
                printf("Invalid number.");
                return 0;
            }
while(Roman_Value(string[counter])!=0)
    {
        if(Roman_Value(string[counter])<Roman_Value(string[counter+1])){
            number+=Roman_Value(string[counter+1])-Roman_Value(string[counter]);
            counter++;}
        else
            number=number+Roman_Value(string[counter]);
            counter++;
    }
if(number>256)
    {
        printf("Invalid number.");
        return 0;
    }
printf("%d",number);
return 0;
}
