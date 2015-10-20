#include <stdio.h>

int arr[1000];
unsigned int arr_size = 0;

void inputData() {
	for(arr_size=0; arr_size < 999; arr_size++)
	{
		scanf("%d",&arr[arr_size]);
		if (arr[arr_size] == 42) break;
	}
}


void bubble_sort() {
	int c = 0;

	int index, iter;

	for (index = 1; index < arr_size; index ++) {
		for (iter = index - 1; iter >= 0; iter --) {
			printf("index=%d, iter=%d\n", index, iter);
			dump_result();
			if (arr[iter] > arr[iter + 1]) {
				c = arr[iter];
				arr[iter] = arr[iter + 1];
				arr[iter + 1] = c;
			}
		}
	}
}

int main()
{
	inputData();
	bubble_sort();

	return 0;
}
