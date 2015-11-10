#include <stdio.h>

int exact_square(int number){
	int i;
	if(number <= 2)
		return 0;

	for(i=2;i<=number;++i){
		if(number == i*i){
			return 1;
		}
	}
	return 0;
}

int main(){
	int n;
	scanf("%d",&n);

	printf("%d", exact_square(n));

	return 0;
}
