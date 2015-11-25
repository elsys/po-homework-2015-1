#include <stdio.h>

int main() {

		int num, i = 0;
		scanf("%d",&num);
		
		while(i++ != 10) {
		int count = 0;
		int tmp = num;
		while(tmp > 0) {
				if(i == tmp%10) {
					count++;
				}
				tmp /= 10;
			}
			if(count > 1)
				printf("%d is met %d times\n", i, count);
		}
	return 0;
}
