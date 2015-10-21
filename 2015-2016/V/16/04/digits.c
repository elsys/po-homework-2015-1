#include <stdio.h>

int main(){
	int d=0;
	int number;
	int t;
	int temp;
	printf("Enter number:\n");
	scanf("%d", &number);
	while (d <= 9){
		t = 0;
		temp = number;
		while(temp > 0){
			if(temp % 10 == d)
				t++;
			temp /= 10;
		}
		if (t > 1)
			printf("The number %d is met %d times\n", d, t);
		d++;
	}

}
