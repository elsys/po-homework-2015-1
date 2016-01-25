#include <stdio.h>

void rotr(int *a,int *b,int *c, int n);
int main(){
int a,b,c,n;
int *ptr_a = &a,*ptr_b = &b,*ptr_c = &c;

	scanf("%d %d %d %d",ptr_a,ptr_b,ptr_c,&n);
	rotr(ptr_a, ptr_b, ptr_c, n);
	printf("%d %d %d \n",a,b,c);

	return 0;
}
void rotr(int *a,int *b,int *c,int n){

int i,rotate;

	for(i=0;i<n;i++){

		rotate = *a;
		*a = *c;
		*c = *b;
		*b = rotate;

	}

}
