#include<stdio.h>
int main(){

	int n,v,p;

	scanf("%d",&n);

	do{
		scanf("%d",&v);
	}while(v==0 && v==1);

	do{
			scanf("%d",&p);
		}while(p>7 || p<0);


    if (v==1){
    	n=n|(1<<p);
    	printf("\n%d",n);
    }
    if (v==0){
    	n=n&~(1<<p);
    	printf("\n%d",n);
    }


		return 0;
}
