#include<stdio.h>
#include<string.h>
int main()
{
char n[100],pom;
int i,p,l;
scanf("%s",n);
l=strlen(n);
p=l-1;
for(i=0; i<=p;p--, i++)
	{
	pom=n[p];
	n[p]=n[i];
	n[i]=pom;
	}
	printf("%s",n);
return 0;
}



