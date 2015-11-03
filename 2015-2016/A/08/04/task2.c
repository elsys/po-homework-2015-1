/*Program that checks it the input number is power of an integer*/

#include <stdio.h>

int exact_square(int);

int main(){
	int num;

	scanf("%d", &num);

	printf("%d", exact_square(num));

	return 0;
}

int exact_square(int num){
	int i;

	for(i = 0; i < num; i++)
		if(i*i == num)
			return 1;

	return 0;
}