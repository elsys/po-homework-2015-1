#include <stdio.h>
#include <stdlib.h>


int main()
{

    int k,i,l=1, n,osnova;
    printf("vuvedi visochina");
    scanf("%d", &n);

    osnova=(2*n)-1;


    for( ; n>0; n--){
        for(i=1; i<n; i++)
        {
            printf(" ");}
            for(k=1; k<=l; k++)printf("*");

            if(l<osnova) l=l+2;
            printf("\n");

    }
    return 0;
}
