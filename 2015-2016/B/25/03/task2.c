#include <stdio.h>
#include <string.h>
int main()
{
   char text6[1000];
   char text9[1000];
   int l, a=0, n;
   printf("Text:"); scanf("%[^\n]s", text6);
   l=strlen(text6);
   for(l=l-1; l>=0; l--){
    text9[a]=text6[l];
    a++;
   }
   n=a;
   for(a=0; a<n; a++ ){
   printf("%c", text9[a]);}
    return 0;
}
