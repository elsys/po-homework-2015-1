#include<stdio.h>


void swap(int *num1, int *num2) {
	   int swapper;
	   swapper = *num1;
	   *num1 = *num2;
	   *num2 = swapper;
}
 
int main() {
	int num1, num2;

	printf("Enter 1st number : \n");
	scanf("%d", &num1);
	printf("Enter the 2nd number : \n");
	scanf("%d", &num2);
	 
	swap(&num1, &num2);
		 
	printf("First number  : %d\n", num1);
	printf("Second number : %d\n", num2);

	
		 
	return (0);
}
