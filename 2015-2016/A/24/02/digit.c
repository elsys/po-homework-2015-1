#include <stdio.h>

int digits[10];

int main()
{
	int num, cur,  i;


	scanf(" %d", &num);

	while(num>0){
	cur = num%10;
	digits[cur]++;
	num/=10;
	}

	for (i=0; i<10; i++){
	if (digits[i] > 0)
		printf("%d %d\n", i, digits[i]);
	}

	return 0;
}
