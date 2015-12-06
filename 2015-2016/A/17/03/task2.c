#include <stdio.h>

int main()
{
   char string[20];

   int i=0,n=0;

    scanf("%s",string);

    i = strlen(string)-1;

    while(i >= 0)
    {
        printf("%c",string[i]);
        i--;
    }
    return 0;
}
