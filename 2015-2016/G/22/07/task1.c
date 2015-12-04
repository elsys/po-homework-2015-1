#include <stdio.h>

void rotr(int *a,int *b,int *c, int n);
int main(){
int a , b , c ,n;
int *pointer_a = &a,*pointer_b = &b,*pointer_c = &c;

  scanf("%d",&a);
	 scanf("%d",&b);
	 scanf("%d",&c);
  scanf("%d",&n);
    rotr(pointer_a, pointer_b, pointer_c, n);
	printf("%d %d %d \n",a,b,c);

	return 0;
}
void rotr(int *a,int *b,int *c,int n){

int i = 0, change;

	while(i < n){
        i++;

		change = *a;
		*a = *c;
		*c = *b;
		*b = change;
	}

}
