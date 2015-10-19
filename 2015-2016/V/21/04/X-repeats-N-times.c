#include <stdio.h>

int main () {
	int n, counter = 0, remainder = 0, check = 0, n2 = 0;
	printf("Enter n: \n");
	scanf("%d",&n);

	do{
		n2 = n;
		do{
			remainder = n2%10;
			if(remainder == check)counter++;
			n2=n2/10;
		}while(n2>0);
		if(counter >= 2)printf("%d repeats %d times",remainder,counter);
		check++;
		counter = 0;
	}while(check <= 9);
	
	return 0;
}
//easy?