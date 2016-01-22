#include <stdio.h>

int main(){
	int numbers[1000];
	int k = 0;
	while (k < 1000){
		printf("\nNumber:");
		scanf("%d", &numbers[k]);
		if (numbers[k] == 42){
			break;
		}
		k++;
	}
	int i,j;
	for (i = 0; i < k; i++){
		for(j = 0; j< k; j++){
			if(numbers[i] > numbers[j]){
				int swap = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = swap;
			}		
		}
	}
	for(i=0;i<k;i++)
		printf("\n%d",numbers[i]);
	return 0;
}
