#include<stdio.h>
#include<string.h>

void main(void)
{
	char a[1000];
	int i=0,b=0;
	printf("\n enter word:");
	scanf("%s",&a);
	
	while(b=0){
		if(a[i]=='\0')
			b=1;
		else
			i++;
	}
	while(i!=0){
		printf(" %s ",a[i]);
		i--;
	}
}
