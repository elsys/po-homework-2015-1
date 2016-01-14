#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d",&n);

    for(i=1;i<=n;i++) /// height =n
    {
        for(j=1;j<=(2*i-1);j++) /// line last=2n-1
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
