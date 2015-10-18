#include <stdio.h>

int main () {

	int num[1000];
	int br,j,sw,index=0,x;
	
	for(br = 0; br < 1000;br++)
		{
			printf("Chislo: ");scanf("%d",&num[br]);
			if(num[br] == 42) { break; x=1;}
			if(x != 1 ) index=index+1;
			
		}
	
	for(br=0; br < index;br++)
		{
			for(j = br + 1;j< index;j++) {
				if(num[j] < num[br])
					{
						sw = num[br];
						num[br] = num[j];
						num[j] = sw;						
						}
			}
		}
	
	for(br=0;br < index;br++) printf("%3d",num[br]);
	return 0;
}
