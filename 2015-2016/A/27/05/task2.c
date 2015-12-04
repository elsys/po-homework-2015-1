#include <stdio.h>
#define MAX_LENGHT 50
void next_generation(int*,int*,int);
int main()
{
	int current[MAX_LENGHT], next[MAX_LENGHT];
	int n,i,j,alive;
	char c;
	do{
		scanf("%d",&n);
		c=getchar(); /*input will not work if this line is absent*/
	}while(n<0||n>20);

	for(i=0;i<n;i++)
	{
		c=getchar();
		if(c!='1' && c!='0') return 1;
		else current[i]=c-'0';
		next[i]=current[i];
		c=getchar();
		if((i+1!=n && c!=' ') || (i+1==n && c!='\n')) return 1;
	}
	if(current[0]!=0 || current[n-1]!=0) return 1;
	for(j=0;j<1000;j++)
	{		
		alive=0;
		for(i=0;i<n;i++)
		{
			current[i]=next[i];
			if(next[i]==1) 
			{
				printf("*");
				alive=1;
			}
			else if(next[i]==0) printf(".");
		}
		printf("\n");
		if(!alive) break;
		next_generation(current,next,n);
	}
	return 0;
}
void next_generation(int *current, int *next, int lenght)
{
	int i;
	for(i=1;i<lenght-1;i++)
	{
		if(current[i-1]==0 && current[i+1]==1) next[i]=1;
		else if(current[i-1]==1 && current[i+1]==0) next[i]=1;
		else if(current[i-1]==1 && current[i+1]==1) next[i]=0;
		else if(current[i-1]==0 && current[i+1]==0) next[i]=0;
	}
}
