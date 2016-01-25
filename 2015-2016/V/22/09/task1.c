#include <stdio.h>

int main(){
	int a,b,c;
	scanf("%d",&a);
	while(a<0 && a>7){
		scanf("%d",&a);
	}
	scanf("%d",&b);
	while(b<0 && b>200){
		scanf("%d",&b);
	}
	c=b >> a & 1;
	
	
	printf("%d",c);



	return 0;
}
