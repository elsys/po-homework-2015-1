#include<stdio.h>
#include<string.h>
int main()
{
	char a[500], b[500];
	int p=0,i;
	printf("Enter Text: ");
	scanf("%s", a);
	i=strlen(a);
	while(i>=0){
		b[p]=a[i];
		p++;
		i--;
	}
	while(i<=p){
	printf("%c", b[i]);
	i++;
	}
	printf("\n");
	return 0;
}
