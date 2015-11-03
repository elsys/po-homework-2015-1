#include <stdio.h>
#include <string.h>

int main()
{
    char a[40];
    int b;

    printf("Vavedi duma: ");scanf("%s",a);

    b=strlen(a);

    while(b>=0){
    printf("%c",a[b]);
    b--;
    }
    return 0;
}
