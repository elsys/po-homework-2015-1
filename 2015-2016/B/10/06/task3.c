#include<stdio.h>
#define VIP 100

void null_array (int *);
int find_rudolph (int *, int);

int main () {

	int number_deers;
	int deers[VIP];
	
	null_array(deers);

	scanf("%d",&number_deers);

	printf("%d\n",find_rudolph(deers,number_deers));	
	
	return 0;
}

void null_array (int *deer_arr) {

	int counter = 0;

	for (;counter < VIP;counter++) {
		deer_arr[counter] = 0;
	}

}

int find_rudolph (int *deer_arr,int all_deers) {

	int counter = 0;
	int current;

	for (counter = 0;counter < all_deers;counter++) {
	
		scanf("%d",&current);
		deer_arr[current]++;
	}

	for (counter = 1;counter < VIP;counter++) {
		if (deer_arr[counter] == 1) {
			return counter;
			break;
		}
	}	
	return 0;
}
