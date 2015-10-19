#include<stdio.h>
#include<stlib.h>
#include<string.h>
void main(void){
char s[80];
int i=0;
int m=0;
do{
i=0;
scanf("%s",&s);
m=strlen(s);
while(s[i]!=0){
	printf("\n%d",s[i]);
	if(s[i]>='a' && s[i]<='z'){
		s[i]=s[i]-('a'-'A');
		i++;
		}
	}
	printf("%s",s);
}while(strcmp(s,"STOP")!=0);
}
