#include <stdio.h>

int power(int, int);

int main(){
	int n, v, p, result=0, i=0;
	
	do{
		scanf("%d", &n);
	}while(n<0 || n>255);
	do{
		scanf("%d", &v);
	}while(v!=0 && v!=1);
	do{
		scanf("%d", &p); 
	}while(p<0 || p>7);
	
	for(i=0; (n>>i)!=0; i++){
		if(i==p && v==1){
			result+=power(2, i);
		}		
		else if(((n>>i & 1) == 1) && ((i==p && v==0) ? 0 : 1)){
			result+=power(2, i);
		}
	}
	printf("%d", result);
	
	return 0;
}

int power(int base, int exp){
	int i, origbase=base;
	if(exp>1){
		for(i=1; i<exp; i++){
			base*=origbase;
		}
	}
	else if(exp==0){
		return 1;
	}
	return base;
}
