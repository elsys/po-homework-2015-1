#include <stdio.h>

void next_generation(int *current, int *next, int length)
{
	int i;
	for(i=1;i<length-1;++i){
		if(current[i-1] == 0 && current[i+1] == 1) 	next[i]=1;
		else if(current[i-1] == 1 && current[i+1] == 0) next[i]=1;
		else if(current[i-1] == 1 && current[i+1] == 1) next[i]=0;
		else if(current[i-1] == 0 && current[i+1] == 0) next[i]=0;
	}
}

int main(){

	int n,i,j,flag,current[20], next[20];
	char c;
		
	do{ 
		scanf("%d",&n);
		getchar();
	}while(n<0||n>20);
	
	for(i=0;i<n;++i){
		c=getchar();
		c-='0';
		current[i]=c;
		next[i]=current[i];
		c=getchar();
	}

	for(j=0; j<1000;++j){
		flag = 0;
		for(i=0;i<n;++i){
			current[i] = next[i];
			if(next[i] == 1){
				flag = 1;
				printf("*");				
			}
			else printf(".");
		}
		printf("\n");
		if(!flag) break;
		next_generation(current, next,n);
	}
	return 0;

}
