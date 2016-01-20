#include <stdio.h>
#include <stdlib.h>

void next_generation(int *, int *, int );

int main() {

	int lenght, index;
	int current[20], next[20];

	scanf("%d", &lenght);


	for(index = 0; index < lenght; index++){
		scanf(" %d", &current[index]);
	}
		next_generation(current, next, lenght);

	printf("\n\n");

	return 0;
}

void next_generation(int *current, int *next, int lenght) {

	int index, limit_times, printing, check, swap, is_checked = 0;

	for(limit_times = 0; limit_times < 1000; limit_times++) {
		
		for(index = 0; index < lenght; index++) {
			if (   (current[index] == 1 || current[index] == 0) 
				&& ( (current[index - 1] == 0 && current[index + 1] == 1) 
				||   (current[index - 1] == 1 && current[index + 1] == 0) ) ) {
				next[index] = 1;
			}
			else {
				next[index] = 0;
			}
		}
		for(printing = 0; printing < lenght; printing++){
			if(current[printing] == 1)
				printf("*");
			else if(current[printing] == 0)
				printf(".");
		}


		is_checked = 0;

		for(check = 0; check < lenght && is_checked != 1; check++){
			if(current[check] == 1) is_checked = 1;
		}

		if(is_checked == 0) break; 
		

		for(swap = 0; swap < lenght; swap++){
			current[swap] = next[swap];
		}



		printf("\n");
	}

}