#include <stdio.h>

int main()
{
	int i=0;
	int n[1000];
	for(;i<16;i++)
		scanf("%d",&n[i]);
	i=0;
	while (i<4){
		printf("\n %d %d %d %d",n[i],n[i+4],n[i+8],n[i+12]);
		i++;

	return 0;
}
