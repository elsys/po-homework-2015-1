#include <stdio.h>
#include <stdlib.h>

int main()
{

    int matrix[4][4];

    int transposing[4][4];
    int chetiri;
    int i;
    int x;
    int opa;

    for(i=0;i<4;i++){
        for(x=0;x<4;x++){

            printf("Vuvedere chislo s kordinati [%d][%d]:\n",i+1,x+1);
            scanf("%d",&matrix[i][x]);
        }
    }


    printf("\n\n");

    for(i=0; i<4; i++){
    for(x=0; x<4; x++)
    {
        printf("%d  ",matrix[i][x]);
        if(x==3)
            printf("\n\n");
    }
    }

    for(i=0; i<4; i++){
    for(x=0; x<4; x++)
    {
       transposing[x][i]=matrix[i][x];
    }
    }

    printf("\n\n");

    for(i=0; i<4; i++){
    for(x=0; x<4; x++)
    {
        printf("%d  ",transposing[i][x]);
        if(x==3)
            printf("\n\n");
    }
    }

    return 0;
}
