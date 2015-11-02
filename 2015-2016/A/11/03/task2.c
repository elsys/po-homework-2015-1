#include <stdio.h>
void Reverse();

int main()
{
    printf("Napishi izrechenie/duma: ");
    Reverse();
    printf("\n");
    return 0;
}
void Reverse()
{
    char c;
    scanf("%c",&c);
    if(c!='\n')
    {
        Reverse();
        printf("%c",c);
    }
}
