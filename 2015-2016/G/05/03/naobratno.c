#include<stdio.h>
#include<string.h>
int main() 
{
char str,s[100];
int i=0,l = 0;
printf("\nTekst:\n");scanf("%s",s);
l=strlen(s)-1;
do
{
      str = s[i];
      s[i] = s[l];
      s[l] = str;
      i++;
      l--;

}while (i<l);
printf("\nNaobratno e :%s\n",s);


return (0);
}

