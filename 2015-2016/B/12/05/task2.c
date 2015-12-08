	#include <stdio.h>
	
	void next_generation(int *current, int *next, int *lenth);
	
	int main() {
	
	int current[20];
	int next[20];
	int lenth, count;
	
	printf (" Enter number of cells: \n");
	scanf ("%d", &lenth);
	
	for (count = 0; count < lenth; count++) {
	printf (" Enter Cell (0 for dead 1 for alive):  \n");
	scanf ("%d", &current[count]);
	}
	
	next_generation(current, next, &lenth);	
	
	return 0;
	
	}
	
	void next_generation(int *current, int *next, int *lenth) {
	
	int count, count1, count2;
	
	for (count = 0; count < *lenth; count++) {
	if (current[count] == 1) printf ("*");
	if (current[count] == 0) printf (".");
	}
	
	printf ("\n");
	
	for (count = 0; count < 1000; count++) {
	
	for (count1 = 1; count1 < *lenth - 1; count1++) {
	next[0] = 0;
	next[*lenth - 1] = 0;
	if (current[count1 - 1] == current[count1 + 1]) next[count1] = 0;
	else next[count1] = 1;
	}
	
	for (count1 = 0; count1 < *lenth; count1++) {
	if (next[count1] == 1) printf ("*");
	else printf (".");
	}
	
	printf ("\n");	
	
	for (count1 = 0, count2 = 0; count1 < *lenth; count1++) {
	if (next[count1] == 0) count2++;
	}

	if (count2 == count1) break;
		
	for (count1 = 0; count1 < *lenth; count1++) current[count1] = next[count1];
					
	}
	
	}
