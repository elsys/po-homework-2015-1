#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int palcheck(int n);

int main()
{
    int n;

    scanf("%d", &n);

    while(!palcheck(n))
    {
        n++;
    }

    printf("%X", n);

    return 0;
}

int palcheck(int n)
{
    char hex[100];
    char reverse[100];
    int i;

    sprintf(hex, "%X", n);

    strcpy(reverse, hex);

    for(i=0; i<strlen(hex); ++i)
    {
        reverse[strlen(hex)-i-1] = hex[i];
    }

    if (strcmp(reverse, hex) == 0)
      return 1;
    else
      return 0;
}
