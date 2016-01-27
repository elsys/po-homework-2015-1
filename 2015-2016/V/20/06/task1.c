#include <stdio.h>


int prime(int num) {
    
	if(num < 0)
        return -1;
    int i = 2;
    
	for(; i <= num-1; i++){
        if(num%i == 0)
            return 0;
	}
    return 1;
}


int main() {
    int num;
    scanf("%d",&num);
    printf("%d\n",prime(num));
    return 0;
}
