/*Prime number indicator (was suggested I switch to english)*/

#include <stdio.h>

int is_prime(int);

int main(){
	float num;
	int error = 0;
	char charAfterFloat;

	if(scanf("%f", &num)){
		charAfterFloat = getchar();
		 /*wasn't sure if the input would be standard(with newline from enter) or from file*/
		if(!((charAfterFloat == '\n') || (charAfterFloat == EOF)) || ((int)num != num))
			error = 1;
	}
	else
		error = 1;

	if(error)
		printf("-1");
	else
		printf("%d", is_prime((int)num));

	return 0;
}

int is_prime(int num){
	int i;

	for(i = 2; i < num && num%i != 0; i++);

	if(i < num)
		return 0;
	else 
		return 1;
}