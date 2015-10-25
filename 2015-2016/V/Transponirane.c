#include <stdio.h>

int main()
{
   int m,n,c,d,matrica[100][100],trans[100][100];

   printf("Vavedi broq na redovete i kolonite\n");
   scanf("%d%d",&m,&n);
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
