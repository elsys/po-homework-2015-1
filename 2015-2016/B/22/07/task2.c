#include <stdio.h>

int main(){

	int n , v , p;
	scanf("%d %d %d", &n, &v, &p);
	
	if (v == 1){
           n = n | (1 << p);
	}
	if(v == 0){
		if( (n & (1 << p)) >> p == 1){
			n = n ^ (1 << p);	
		}
	}
     printf("%d\n", n);
     
     return 0; 
}

