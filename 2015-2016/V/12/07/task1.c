#include <stdio.h>

void rotr(int *a, int *b, int *c){
	int swap1,swap2;
	swap1 = *b;
	*b = *a;
	swap2 = *c;
	*c = swap1;
	*a = swap2;

}

int main(){
	int times_swap;
	int count;
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&times_swap);
	for(count = 0; count < times_swap; count++){
			rotr(&a,&b,&c);	
	}
	printf("%d %d %d\n",a,b,c);
	return 0;
}