#include <stdio.h>
#include <string.h>

int main()
{
 char niz[100],zin [100];
 int n,j,k;
 printf("\n Vyvedi niz");
 scanf("%s",niz);
 n=strlen(niz);
 for(j=n-1,k=0;j>=0;j--,k++)
 {
  zin[k]=niz[j];
 }
 zin[k]='\0';
 printf("%s \n",zin);
 return 0;
 }
