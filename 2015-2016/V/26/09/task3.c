#include <stdio.h>

int hex_palindrom(int);

int main(){
	int num;
	scanf("%d", &num);
	if(hex_palindrom(num) == 1){
		printf("%X", num);
		return 0;
	}
	do{
		num++;
	}while(hex_palindrom(num) == 0);
	printf("%X", num);
	return 0;
}

int hex_palindrom(int n){
	int lenght = 0, half, i = 1, j = 3;
	do{
		lenght++;
	}while(n >> lenght != 0);
	while(lenght%4 != 0)
		lenght++;
	half = lenght/2;
	while(lenght-i > half){
		if((n & (1 << (lenght-i))) >> (lenght-i) != (n & (1 << j)) >> j){
			return 0;
		}
		i++;
		if((i-1)%4 == 0)
			j += 8;
		j--;
	}
	return 1;
}
