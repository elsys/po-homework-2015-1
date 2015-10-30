#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int x;
    char y[50];
    scanf("%s", &y);
    x=strlen(y)-1;
    while(x>=0)
    {
        printf("%c", y[x]);
        x--;
    }
    printf("\n");
    return 0;

}
