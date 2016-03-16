#include <stdio.h>

void minmax(int *, int, int *, int *);

int main()
{
	int arr[500], size, min, max, counter;
	int sum;

	scanf("%d", &size);
	if(size > 0 && size < 500){
		for(counter = 0; counter < size; counter++){
			scanf("%d", &arr[counter]);
		}
	}

	minmax (arr, size, &min, &max);

	sum = max + min;

	printf("%d\n", sum);

	return 0;
}

void minmax(int *arr, int size, int *min, int *max)
{
	int i;

	for(i = 0; i < size; i++){
		if(arr[i] > *max){
			*max = arr[i];
		}
		if(arr[i] < *min){
			*min = arr[i];
		}
	}
}