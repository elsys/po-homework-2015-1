#include <stdio.h>
void binary(int , int [8]);
int main(){

	int a,b;
	int masive[8] = {0,0,0,0,0,0,0,0};
	do{
	
	scanf("%d",&a);
        
	
	}while(a<0 || a>7);
	
	
	do{
	
	scanf("%d",&b);
        
	
	}while(b<0 || b>200);
 	
        
	binary(b,masive);
	
	printf("%d \n",masive[7-a]);
	
}

void binary(int a, int masive[8]){

	int broqch=7;
	
	while(a!=0){
	
	masive[broqch]=a%2;
	a=a/2;
	broqch--;
	
	}
	
	
}
