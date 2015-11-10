#include <stdio.h>
#define CELLS 20
#define MAX_LOOP 1000

void next_generation (int *,int *, int);
void print_gen(int *,int);

int main () {

	int Current[CELLS],Next[CELLS];
	int main_length,counter,n,main_counter;
	char check;

	do {

		scanf("%d",&main_length);
		}while (main_length>=20 || main_length <= 0);

	for (counter = 0; counter < main_length; counter++) {
		
		scanf("%d",&n); //Current cell

		if (n == 0 || n == 1) {				

		Current[counter] = n;

		} else {

			printf("Only 0 or 1 !!!");
			return 1;

		}//else
	}//for

	if (Current[0] != 0 && Current[main_length - 1] != 0) {
		printf("\nFirst and final cell must be only 0 !!!\n");
		return 1;
	}

	for (counter = 0;counter < main_length; counter++) {

		if (Current[counter] == 0) printf(".");
		else if(Current[counter] == 1) printf("*");
	}
	printf("\n");

	for(counter = 0;counter < CELLS ;counter++) Next[counter]=0;
            	

	for(main_counter = 1;main_counter <= MAX_LOOP; main_counter++) {
    			

        	next_generation(Current,Next,main_length); //Create new generation function

        
		print_gen(Next,main_length); //Print function


        	for(counter = 0; counter < main_length ; counter++) {
        
          	if(Next [counter] == 1)
            	
		check = 'a';
        	
		}

        	if(check != 'a') break;

        }//Main for

	return 0;
}



void next_generation(int *current, int *next, int length) {

	int counter,l;

	l = length - 1;

	for (counter = 1; counter < l; counter++) {
		
		if (current[counter - 1] != current[counter + 1]) next[counter] = 1;
		else if (current[counter - 1] == current[counter + 1]) next[counter] = 0;	
	}

	for (counter = 0;counter < length; counter++) {
		current[counter] = next[counter];
	}

}

void print_gen(int *pnext ,int p_length) {

	int count;

	for(count = 0;count < p_length;count++) {
        
            if(pnext[count]==0)
                printf(".");
            else if(pnext[count]==1)
                printf("*");
        }
        printf("\n");

}

