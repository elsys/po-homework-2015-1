#include <stdio.h>

int opp(int k);
int main()
{
	int p,n,v,k=0;
	scanf("%d",&n);
	do{
		scanf("%d",&v);
	}while(v!=0&&v!=1);
	do{
		scanf("%d",&p);
	}while(p<0||p>7);
	if(v==0){
		k=(n&(~(1<<p)));	
	}else{
		k=(n|(1<<p));
	}
	printf("%d",k);
}
