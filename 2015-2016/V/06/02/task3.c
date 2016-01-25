#include <stdio.h>
#define MAX 1000

int main() {
	int arr[MAX];
	int digits_count=0;
	do {
		scanf("%d", & arr[digits_count]);
		
		if(arr[digits_count]==42) {
			break;
		}
		digits_count++;
		
	}while(digits_count < MAX);
	
	int i=0; 
	for( i=0 ; i<digits_count ; ++i ) {
		for( int j=digits_count-1; j>i; --j ) {
			if( arr[j-1] > arr[j]) {
				int helper = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = helper;
			}
		}
	}
	
	for( i=0 ; i<digits_count ; i++) {	
		printf("\n %d", arr[i]);
	}
	
	return 0;
}
