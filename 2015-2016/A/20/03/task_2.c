#include<stdio.h>
#include<string.h>
void main()
{
    int i;
    char niz[15];

    printf("Vuvedi niz: ");
    scanf("%s", niz);

    for(i=0; i<=strlen(niz); i++)
        printf("%c", niz[strlen(niz)-i]);

}
