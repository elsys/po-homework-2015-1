#include <stdio.h>

int main() {
	int v, p, b, bit;


  
    scanf("%d", &b);

	while(v != 0 && v != 1) scanf("%d", &v);

	do{
        scanf("%d", &p);
    }while(p < 0 || p > 7);

    if(!v) {
    	bit = ~(1 << p);
    	printf("%d \n", (b & bit));
    }
    else {
    	bit = 1 << p;
    	printf("%d \n", (b | bit));
	}

	return 0;

}