#include <stdio.h>

void next_generation(int *current, int *next, int length);
int is_dead(int *current, int length);
void print_current(int *current, int length);

int main(){

	int counter,length, cells[20], next_cells[20];

	do{

		scanf("%d", &length);
	
	}while(length < 0 || length > 20 );

	do{

		for(counter=0; counter < length; counter++){

			do{

				scanf("%d", &cells[counter]);
	
			}while(cells[counter] < 0 || cells[counter] > 1 );

		}

	}while(cells[0]!=0 || cells[length-1]!=0 );

	for(counter=0; counter < 1000; counter++){

		print_current( &cells[0], length );

		next_generation( &cells[0], &next_cells[0], length );

		if(is_dead(&cells[0], length)){

			print_current( &cells[0], length );
			break;

		}

	}

	return 0;

}

void next_generation(int *current, int *next, int length){

	int counter;

	*next = 0;
	*(next + length - 1) = 0;

	for(counter=1; counter < length-1; counter++){

		if( *(current+counter-1) == *(current+counter+1) ){

			*(next+counter) = 0;
			
		}else {

			*(next+counter) = 1;

		}

	}

	for(counter=0; counter < length-1; counter++){

		*(current+counter) = *(next+counter);

	}

};

int is_dead(int *current, int length){

	int counter;

	for(counter=0; counter < length-1; counter++){

		if( *(current+counter) != 0 ){

			return 0;
		
		}

	}

	return 1;

};

void print_current(int *current, int length){

	int counter;

	for(counter=0; counter < length-1; counter++){

		if( *(current+counter) == 0 ){

			printf(".");
		
		}else {

			printf("*");

		}

	}

	printf("\n");

};
