#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int rotate;
void rotr ( int *a, int *b, int *c );
int main(){
	int a,b,c;
	scanf("%d %d %d %d",&a ,&b ,&c ,&rotate);
	rotr(&a , &b , &c);
	printf("%d %d %d", a ,b ,c);

 return 0;
}
void rotr ( int *a, int *b, int *c ) {
	int helper, helper1; 	
	for(helper = 0; helper < rotate; helper++){
		helper1 = *a;
		*a = *c;
		*c = *b;
		*b = helper1;
			
 }		

} 

