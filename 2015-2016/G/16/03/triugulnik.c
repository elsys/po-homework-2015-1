#include <stdio.h>
#include <stdlib.h>

int main()
{
    int osnova;
    int visochina;
    int n;
    int i;
    int prazno;
    scanf("%d",&n);
    int x;
    osnova = (2*n) - 1;
    visochina = n;

    for(i=1;i<=osnova;i+=2){
        for(prazno=0;prazno<(osnova-i)/2;prazno++){
            printf(" ");
        }
        for(x=0;x<i;x++){
            printf("*");
        }


        printf("\n");
    }

    return 0;
}
