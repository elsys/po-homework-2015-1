#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char n[1000];
int i=0,p,l;
scanf("%[^\n]s",n);
l=strlen(n);
p=l;
for(i = 0; i < p; p--, i++)
	printf("%c",n[p]);
return 0;
}



