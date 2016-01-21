#include <stdio.h>

int main(){
	int p, n, v;
	scanf("%d", &n);
	do{
		scanf("%d", &v);
	}while(v != 0 && v != 1);
	do{
		scanf("%d", &p);
	}while(p < 0 || p > 7);
	if(v == 1){
		printf("%d", n | (1 << p));
	}else{
		printf("%d", n ^ (1 << p));
	}
	return 0;
}
