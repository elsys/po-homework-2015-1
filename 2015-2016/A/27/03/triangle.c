#include <stdio.h>
int main()
{
	int n,space,counter1,counter2,arrows=1;
	do{
		printf("n=");
		scanf("%d",&n);
		if(n<2) printf("n must be >1!\n");
	}while(n<2);
	space=n;
	for(counter1=0;counter1<=n;counter1++)
	{
		for(counter2=0;counter2!=space;counter2++) printf(" ");
		arrows=counter1*2-1;
		for(counter2=0;counter2<arrows;counter2++) printf("^");
		space--;
		printf("\n");
	}
	return 0;
}
