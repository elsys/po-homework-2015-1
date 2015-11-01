

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, k, p, z, h;
    scanf("%d", &n);
    z=1;
    h=1;
    for(i=0; i<n; i++)
    {
        for(p=0; p < n - z ; p++)
        {
            printf(" ");
        }

        for(k = 0; k < 2*h - 1; k++)
        {
            printf("^");
        }
        h++;
        z++;
        printf("\n");
    }
    return 0;

}


