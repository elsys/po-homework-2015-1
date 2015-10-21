#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0; //broqt na redovete
    int osn,i,k,osn2;
    printf("n = ");
    scanf("%d",&n);


    osn = (2 * n) - 1;
    osn2 = osn;

    for(k = 0; k < n; k++)
    {
        for(i = 0; i < osn; i++)
        {
            printf("*");
        }
        
        //printf("%d\n",osn); //broqt na zvezdi4kite na edin red
        
        osn-=2;
        printf("\n");

    }
    printf("osnovata e: %d\n",osn2);


    return 0;
}
