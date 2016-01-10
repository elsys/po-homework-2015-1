#include <stdio.h>

int main(){
	int numberOfDeers, deerN[100], temp, i;
	for(i = 0; i < 100; i++){
		deerN[i] = 0;
	}

	scanf("%d", &numberOfDeers);
	for(i = 0; i < numberOfDeers; i++){
		scanf("%d", &temp);
		deerN[temp-1]++;
	}

	for(i = 0; i < 100; i++){
		if(deerN[i] == 1)
			break;
	}

	printf("%d", i+1);

	return 0;
}