#include <stdio.h>
#include <stdlib.h>‪
char n[50];
int i;
void main(void)
{
printf("Write a word:\n");scanf("%s",&n);
for(i=strlen(n)-1;i>=0;i--)
{
printf("%c",n[i]);
}
}
