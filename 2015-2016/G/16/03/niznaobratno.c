#include <stdio.h>
#include <stdlib.h>

int main()
{

   char niz[100];
   int l;
   int x;
   int i;
   int b;
   gets(niz);

   l = strlen(niz);

    for(i=l-1,x=0;x<i;i--,x++){
    b = niz[x];
    niz[x]=niz[i];
    niz[i]=b;

   }

   puts(niz);

    return 0;
}
