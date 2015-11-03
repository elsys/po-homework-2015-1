#include <stdio.h>

int exact_square(int number);

int main(){
	int number;
	scanf("%d",&number);
	printf("%d\n",exact_square(number));
	return 1;
}

int exact_square(int number){
	int count;
	for(count = 0 ; count * count <= number ; count++){
		if(count * count == number){
			return 1;
		}
	}
	return 0;
}
