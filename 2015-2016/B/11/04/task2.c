#include<stdio.h>

int number,counter,count=0;

void exact_square(){
	scanf("%d",&number);
	for(counter=1;counter<number;counter++){
		if(counter*counter==number){
			printf("\n 1");
			printf("\n %d=%d^2",number,counter);
			count=0;
		}
		count++;

	}
	if(count==number-1)printf("\n 0");

}


int main(){
	exact_square();
	return 0;

}
