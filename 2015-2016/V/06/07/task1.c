#include <stdio.h>
void rotr(int *,int *,int *);

int main(){
	int a, b , c, n, i;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &n);
	for(i=0;i<n;i++){
		rotr(&a, &b, &c);
	}
	printf("%d %d %d", a, b, c);	
}

void rotr(int *a, int *b, int *c){
	int swap1=0, swap2=0;
	swap1=*a;
	*a=*c;
	swap2=*b;
	*b=swap1;
	*c=swap2;
}
