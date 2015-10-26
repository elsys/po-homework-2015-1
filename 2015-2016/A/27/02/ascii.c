#include <stdio.h>
void showAsciiTable(void);
int main()
{
    showAsciiTable();
    return 0;
}
void showAsciiTable(void)
{
    int dec=0;
    char character=0;
    printf("Char - Dec");
    while(dec<=255)
    {
        printf("\n%c - %d",character,dec);
        dec++;
        character++;
    }
}
