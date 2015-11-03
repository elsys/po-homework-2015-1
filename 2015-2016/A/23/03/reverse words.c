#include <stdio.h>
#include <stdlib.h>‪
#include <string.h>
char n[50];
int i;
void main(void)
{
printf("Write a word:");scanf("%s",n);
printf("\n");
for(i=strlen(n)-1;i>=0;i--){
printf("%c",n[i]);
}
}
