#include <stdio.h>
void decimal(int , int [8]);
int binary(int [8]);
int main(){

	int n,p,v;
	int masive[8] = {0,0,0,0,0,0,0,0};
	
	scanf("%d",&n);
        
	do{
	
		scanf("%d",&v);
	
	}while(v<0 || v>1);
	
	do{
	
		scanf("%d",&p);
	
	}while(p<0 || p>7);
        
	decimal(n,masive);
	
	masive[7-p] = v;
	
	printf("%d \n",binary( masive ));
	return 0;
}

void decimal(int n, int masive[8]){

	int broqch=7;
	
	while(n!=0){
	
	masive[broqch]=n%2;
	n=n/2;
	broqch--;
	
	}
	
	
}
int binary(int masive[8]){
	
	int broqch=1,dec=masive[0]*2;
	for(;broqch<7 ; broqch++ ){
	
	dec=(masive[broqch]+dec)*2;
	
	}
	dec=dec+masive[7];
	return dec;
}


