//Ot vhoda se vuvejda niz.Nizut da se izvede sushtiqt no oburnat.
//Velislav Yotov 10A Nomer-5
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
char string[500];
int i,l;
printf("Vuvedi string  ");
scanf("%s",&string);
printf("\n");
l=strlen(string);
for(i=l-1;i>=0;i--)
    {
        printf("%c",string[i]);
    }
}
