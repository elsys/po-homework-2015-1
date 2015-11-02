#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int num;
int exact_square(int);

int main(){
	 
	scanf ( "%d", &num);
	printf ( "%d", exact_square(num));
	printf("\n");
 

 return 0;
}

int exact_square(int num){
 	
	int helping_number;
	while (helping_number < num){
		if(helping_number * helping_number == num) {return 1; break;}

	helping_number ++;
}
 
 return 0;


