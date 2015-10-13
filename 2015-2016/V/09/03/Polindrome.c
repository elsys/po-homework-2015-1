#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    printf("Enter word: \n");
    scanf("%s", a);
    strrev(a);
    printf("%s", a);
    return 0;
}
