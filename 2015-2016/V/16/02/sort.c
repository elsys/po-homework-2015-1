#include <stdio.h>

int main(){
	int numbers[1000];
	int i=0;
	int a;
	int j=0;
	int sorted=0;
	while (i < 1000){
		printf("Enter number. To stop enter 42.\n");
		scanf("%d", &numbers[i]);
		if (numbers[i] == 42){
			break;
			}
		i++;
	}
		int size = i;
	while(!sorted){
		sorted=1;
		for (j = 0; j < i; j++){
			if(numbers[j] > numbers[j+1]){
				a = numbers[j];
				numbers[j] = numbers[j+1];
				numbers[j+1] = a;
				sorted = 0;
			}
		}
			i--;
	}		
	for (i = 0; i <= size; i++)
		printf("%d\n", numbers[i]);
	return 0;
}
