#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(void){
char n[50];
int i;
printf("n=");scanf("%s",n);
printf("\n");
i=strlen(n);
for(i-1;i>=0;i--){
	printf("%c",n[i]);
}
}
