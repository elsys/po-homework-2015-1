#include <stdio.h>
#include <string.h>

void main (void)

{

  int i=0,l;
  char s[100];
  char s1[100];
  gets(s);
  l=strlen(s);
  s1[l]='\0';
  for(l=l-1;l>=0;l--)
 {
   s1[i] = s[l];
   i++;
 }

  printf("%s",s1);
}
