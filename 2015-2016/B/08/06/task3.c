#include <stdio.h>

int main() {
	int deers[200];
	int number_of_deers, num_of_deer, i, j, temp = 0;

	scanf("%d", &number_of_deers);

	for(i = 0; i < number_of_deers; i++){
		deers[i] = scanf("%d", &num_of_deer);
	}

	for(i = 0; i < number_of_deers; i++) {
		for(j = 0; j < number_of_deers; j++) {
			if(deers[i] == deers[j]) temp++;
			
		}
		if(temp == 1) {printf("%d \n\n", deers[i]); break;}
		else temp = 0;
	}

	
	return 0;
}