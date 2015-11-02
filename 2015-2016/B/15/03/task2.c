#include <stdio.h>
#include <string.h>

int main()
{
int i ,j;
char s[100];
fgets(s,100,stdin);
j = strlen(s) - 1;
for(i=0;j>=i;j--)
 {
printf("%c",s[j]);
 }
}
