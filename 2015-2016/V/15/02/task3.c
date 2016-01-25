/// Should the program take 42 in the array?
#include <stdio.h>

void fastSort(int*, int);
void fswap(int*, int*);

int main()
{
	int numbers[1000] = {0}; // sets all the numbers to 0
	int i = 0;
	do {
	scanf("%d", &numbers[i]);
	}
	while(numbers[i++] != 42);
	fastSort(numbers, i);
	int j = 0;
	for (j = 0; j < i; j++)
        	printf("%d%c", numbers[j], (j == i - 1) ? ('\n') : (' '));
	return 0;
}

void fswap(int* a, int* b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

void fastSort(int *arr, int n) {
    int i, j, part;
    if (n < 2)
        return;
    part = arr[n / 2];
    for (i = 0, j = n - 1; /* empty */  ; i++, j--) {
        while (arr[i] < part)
            i++;
        while (part < arr[j])
            j--;
        if (i >= j)
            break;
	fswap(&arr[i],&arr[j]);
    }
    fastSort(arr, i);
    fastSort(arr + i, n - i);
}
