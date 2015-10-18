#include <stdio.h>

int main () {

	int num[1000];
	int br,n,j,sw,ch,number;

	do{
	printf("Vavedi broiat na chislata:  ");scanf("%d",&n);
		}while(n > 1000);
	
	for(br = 0;br < n;br++) num[br] = 0;	
	
	for(br = 0;br < n;br++) {
		printf("Chislo: ");scanf("%d",&ch);		
		number = ch;				
		if(number == 42) break;
		else num[br] = number;
		}
	for(br = 0;br < n;br++)
	{
		for(j = br + 1;j < n;j++)
			{
			   if(num[j] < num[br])
				{
				   sw = num[br];
				   num[br] = num[j];
				   num[j] = sw;
				}
			}

	}
	
	for(br = 0;br < n;br++) printf("%3d",num[br]);	
	
	return 0;
}
