//Ot vhoda se prochita niz s rimski chisla.
//Da se izvede na izhoda tqhnata desetichna stoinost.
//Max stoinost : 256
//Velislav Yotov 10a Nomer-5
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Values(char c)
{
int n=0;
switch(c)
{
case 'I':
n=1;
break;
case 'V':
n=5;
break;
case 'X':
n=10;
break;
case 'L':
n=50;
break;
case 'C':
n=100;
break;
case '\0':
n=0;
break;
}
return n;
}

int main()
{
char s[100];
int i=0;
int number=0;
printf("Enter Roman number:");
scanf("%s",&s);

while(n(s[i])!=0)
    {
        if(n(s[i])<0)
            {
                printf("Invalid number.",s[i]);
                return 0;
            }
        number=number+n(s[i]);
        i++;
    }
if(number>256)
    {
        printf("Invalid number.",s[i]);
        return 0;
    }
printf("%d",number);
return 0;
}
