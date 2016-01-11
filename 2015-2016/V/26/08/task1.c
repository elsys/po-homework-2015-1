#include <stdio.h>

void decimal_to_heximal();
void print_heximal(int);
void heximal_to_decimal();

int main(){
	char z;
	do{
		z = getchar();
	}while(z != 'd' && z != 'h');
	if(z == 'd'){
		decimal_to_heximal();
		return 0;
	}
	if(z == 'h'){
		heximal_to_decimal();
		return 0;
	}
	return -1;
}

void decimal_to_heximal(){
	int a, b, c;
	do{
		scanf("%d, %d, %d", &a, &b, &c);
	}while(a < 0 || a > 255 || b < 0 || b > 255 || c < 0 || c > 255);
	printf("#");
	print_heximal(a/16);
	print_heximal(a%16);
	print_heximal(b/16);
	print_heximal(b%16);
	print_heximal(c/16);
	print_heximal(c%16);
}

void print_heximal(int n){
    if(n < 10)
        printf("%d", n);
    else
        printf("%c", 87+n);
}

void heximal_to_decimal(){
	char c;
	int i, sum[3];
	c = getchar();
	c = getchar();
	for(i = 0; i < 3; i++){
		sum[i] = 0;
		c = getchar();
		if(c >= 'a' && c <= 'f')
			sum[i] += (c-87)*16;
		if(c >= '0' && c <= '9')
			sum[i] += (c-48)*16;
		c = getchar();
		if(c >= 'a' && c <= 'f')
			sum[i] += (c-87);
		if(c >= '0' && c <= '9')
			sum[i] += (c-48);
	}
	printf("rgb(");
	for(i = 0; i < 3; i++){
		printf("%d",sum[i]);
		if(i < 2)
			printf(", ");
	}
	printf(")");
}
