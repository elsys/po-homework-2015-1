#include<stdio.h>
int main()
{
	int n,i,p,o,t=0,g=1;
	char m;
	printf("\n Enter Symol to Use: \n");
	scanf("%c", &m);
	printf("\n Enter Triangle Height: \n");
	scanf("%d", &n);
	i=n;
	p=n;
	o=g;
	while(p>=1){
		while(i>=1){
		printf(" ");
		i--;
		}
		t++;
		i=n-t;
			while(g>=1){
				printf("%c",m);
				g--;
			}
		printf("\n");
		g=o+2;
		o=o+2;
		p--;
	}
	return 0;
}
