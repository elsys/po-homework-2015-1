#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main(void)
{
   char l, w[1000];
   int a;
   int b;
   int c;
   b=0;
   printf("insert text:" ,c ); scanf("%d", &c);
   gets(w);
   a=strlen(w)-1;
   while(a>b)
    {
   l=w[a];
   w[a]=w[b];
   w[b]=l;
    (b=b+1,a=a-1);
    }
puts(w);
}
