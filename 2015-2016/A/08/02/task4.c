/*Programa za vuvejdane na chislo i izvejdane na broq na vsqka cifra ot nego*/

#include <stdio.h>

int main(){
	int num, cur, digits[10], i;
	for(i=0; i<10; i++)
		digits[i] = 0;	
	
	scanf("%d", &num);

	for (; num>0; num/=10){
	cur = num%10;
	digits[cur]++;
	}

	for (i=0; i<10; i++){
	if (digits[i] > 0)
		printf("%d.\t%d\n", i, digits[i]);
	}

	return 0;
}
