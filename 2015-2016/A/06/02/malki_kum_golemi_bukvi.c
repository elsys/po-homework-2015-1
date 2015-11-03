#include <stdio.h>

void main(void)
{
    char a[1000];
    printf("\nwrith something");
    printf("\nSTOP to end\n");
    scanf("%s",a);
    while(!(a[0] == 'S' && a[1] == 'T' && a[2] == 'O' && a[3] == 'P' && a[4] == '\0'))
        {
        int b=0;
        while(a[b]!='\0')
        {
            if (a[b] >= 'a' && a[b] <= 'z')
            {
                a[b] -= 32;
            }
            b=b+1;
        }
        printf("%s\n", a);
        scanf("%s",a);
    }
}
