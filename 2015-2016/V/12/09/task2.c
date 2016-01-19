#include <stdio.h>

int opp(int k);

int main(){
	int res= 0,p,n,v;
	scanf("%d",&n);
	do{
		scanf("%d",&v);
	}while(v < 0 || v > 1);
	do{
		scanf("%d",&p);
	}while(p < 0 || p > 7);
	if(v == 1){
		res = (n | (1 << p));
	}else{
		res = (n & (~(1 << p)));

	}
	printf("%d\n",res );
}