#include <stdio.h>

int main()
{
   int m=4,n=4,c,d,matrica[10][10],trans[10][10];

   printf("Matricata trqbva da bude 4x4\n");
   printf("Vavedi chislata ot matricata\n");
   for(c=0;c<m;c++)
      for(d=0;d<n;d++)
         scanf("%d",&matrica[c][d]);
   for(c=0;c<m;c++)
      for(d=0;d<n;d++)
         trans[d][c]=matrica[c][d];
   printf("Oburnata e:-\n");
   for(c=0;c<n;c++){
      for(d=0;d<m;d++)
         printf("%d\t",trans[c][d]);
      printf("\n");
   }
   return 0;
}
