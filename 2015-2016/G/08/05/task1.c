#include <stdio.h>
#include <stdlib.h>

int main()
{

  int matrica[4][4],trans[4][4];
int i,j;

  for (i=0;i<4;i++)
  for (j=0;j<4;j++){

    scanf("%d",&matrica[i][j]);

  }


  for (i=0;i<4;i++)
  for (j=0;j<4;j++){

    printf("%d  ",matrica[i][j]);

    if(j==3)printf("\n\n");

  }
printf("\n\n");

for (i=0;i<4;i++)
  for (j=0;j<4;j++){

trans[j][i]=matrica[i][j];


  }
    for (i=0;i<4;i++)
  for (j=0;j<4;j++){

    printf("%d  ",trans[i][j]);

    if(j==3)printf("\n\n");

  }

}

