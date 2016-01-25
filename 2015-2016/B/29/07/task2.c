#include<stdio.h>

int main(){
	int v, p, n, temp;

	scanf("%d %d %d",&n, &v, &p);
	temp = ((n >> p) & 1);
	if (temp != v){
		n = n^( 1 << p);
	}
	printf("%d",n);

	return 0;
}
