#include <stdio.h>
#include <string.h>

int main()
{
char word[50];
char back[50];
int i,l,b;
scanf("%s", word);
l=strlen(word) -1;
for(i=l,b=0;i>=0;i--, b++)
{
back[b]=word[i];
}
back[b]='\0';
printf("%s",back);
return 0;
}
