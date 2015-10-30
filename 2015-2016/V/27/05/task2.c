#include<stdio.h>
#include<string.h>

int main()
{
	char a[500];
	int i,o,m=0;
	printf("\n");
	printf("\n\t Enter String: \n");
	scanf("%s", a);
	i=strlen(a);
	for(o=0; o<=i; o++){
			if(a[o]!=a[i-o-1]){
				m=1;
				break;
			}
	}
	if(m>0)
		printf("\n\t 1 \n");
	else
		printf("\n\t 0 \n");
	
	printf("\n");
	return 0;
}
