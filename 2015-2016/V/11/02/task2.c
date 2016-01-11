
#include <stdio.h>
#include <string.h>
#define MAX 100


int main(){
	char c[MAX];
	int p,i=0,j,k=0;
	do{
		scanf("%s",c);
		i = 0;
		j = strlen(c);
		while(i < j){
			if(c[i] == 'S')
			{
				if(c[i+1] == 'T')
				{
					if(c[i+2]=='O')
					{
						if(c[i+3]=='P')
						{
							p = 1;
							break;
						}
					}
				}
			}
			
			i++;
		}
		k=0;
		while(k < j && p != 1)
		{
			if(c[k] < 'Z')
				printf("%c",c[k]);
			else
				printf("%c",c[k] - 32);
			k++;
		}
		printf("\n");
	}while(p != 1);
	return 0;
