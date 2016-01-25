#include <stdio.h>

int main(){
	
	int a;
	int b;
	
	scanf("%d %d", &a, &b);
	
	if(a < 0 || a > 7){
		return 0;
	}
	if(b < 0 || b > 200){
		return 0;
	}	
	
	b = (b >> a) & 1;
	
	printf("%d\n", b);
	
	return 0;
}
