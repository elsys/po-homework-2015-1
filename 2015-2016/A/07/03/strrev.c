#include<stdio.h>
#include<string.h>

int main()
{
    char rev[50], c;
    int i, j = 0;

    scanf("%s", rev);
    j = strlen(rev) - 1;
    for(i = 0; i < j; i++, j--)
    {
        c = rev[i];
        rev[i] = rev[j];
        rev[j] = c;
    }
    printf("\nThe reversed string is:%s", rev);

    return (0);
}
