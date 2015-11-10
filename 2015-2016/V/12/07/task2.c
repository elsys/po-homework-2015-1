#include <stdio.h>
#include <string.h>

void next_generation(int *current, int *next, int length);
int check_generation(int *current, int *next, int length);
void strcpy_int(int *current,int *next, int length);

int main(){
	int array_lenght;
	do{
		scanf("%d",&array_lenght);
	}while(array_lenght < 0 || array_lenght > 20);
	int current[array_lenght];
	int next[array_lenght];
	int count,count_print;
	for(count = 0; count < array_lenght ; count++){
		scanf("%d",&current[count]);
	}
	for(count_print = 0 ;count_print < array_lenght; count_print++){
			if(current[count_print]){
				printf("*");
			}
			else
				printf(".");
	}
	printf("\n");
	for(count = 0; count < 1000 && check_generation(current,next,array_lenght); count++){
			next_generation(current,next,array_lenght);
			for(count_print = 0 ;count_print < array_lenght; count_print++){
				if(next[count_print]){
					printf("*");
				}
				else
					printf(".");
			}
			printf("\n");			
			strcpy_int(current,next,array_lenght);
	}
}
void next_generation(int *current, int *next, int length){
	int count;
	int count_print;
	*next = 0;
	for(count = 1;count < length; count++){
		if((*(current + count + 1) == 1 && *(current + count - 1) == 0) || (*(current + count + 1) == 0 && *(current + count - 1) == 1)){
			*(next + count) = 1;
		}
		else{
			*(next + count) = 0;
		}
	}
}

int check_generation(int *current, int *next, int length){
	int count,count_zero =0;
	for (count = 0; count < length; ++count){
		if(*(current + count) == 0){
			count_zero++;
		}
	}
	if (count_zero == length)
		return 0;
	else
		return 1;

}

void strcpy_int(int *current,int *next, int length){
	int count;
	for(count = 0 ; count <length ; ++count){
		*(current + count) = *(next + count);
	}
}