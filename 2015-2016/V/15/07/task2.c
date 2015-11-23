#include <stdio.h>
#include <stdlib.h>

void next_generation(int*, int*, int);

int main() {
	int *curr, *next, n, i = 0;

	do 
		scanf("%d%*c", ({printf("Enter N: "); &n;}) );
	while(n <= 0 || n >= 20);
	curr = (int*)malloc(sizeof(int) * n);
	next = (int*)malloc(sizeof(int) * n);
	curr[n] = 2;
	for(; i < n; i++) {
		
		scanf("%d", (curr+i));
		
		if(!(curr[i] == 0 || curr[i] == 1)) {
			i--;
			continue;
		}
		next[i] = curr[i];

	}
	
	i = 0;
	do {
		next_generation(curr, next, n);
		{
			int i = 0, flag = 0;
			for(; i < n; i++) {
				printf("%c ", (curr[i] == 0) ? '.': '*');
				flag += curr[i];
				curr[i] = next[i];
			}
			printf("\n");
			if(!flag)
				break;
		}
	} while(++i < 1000);
	
	free(curr);
	free(next);
	
	return 420;
}

void next_generation(int* current, int* next, int length) {
	
	int i = 1;
	
	
	for(; i < length - 1; i++) {
	
		if(!(*(current+i))) {
			if(current[length-1])
				next[length-1] = 0;
			if(current[0])
				next[0] = 0;
			if(current[length-1])
				next[length-1] = 0;
			if(((current[i-1] != 0 ) || (current[i+1] != 0)) && (current[i-1] != current[i+1]))
				*(next+i) = 1;
				continue;
		}
		

		
		else i[next] = 0; /// ...
		//getch();
	}
	
}